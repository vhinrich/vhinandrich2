<?php
/**
 * FBInstantArticleOAuth2Connector
 * Version 1.1
 */

class FBInstantArticleOAuth2Connector {
	const API_DOMAIN = 'http://fbinstant.vhinandrich.com';
	const API_ENDPOINT = API_DOMAIN . '/services/v1/';
	const OAUTH_ENDPOINT = API_DOMAIN . '/oauth2/';

	const OAUTH_AUTHORIZATION = 'authorize';
	const OAUTH_ACCESS_TOKEN = 'token';

	const GRANT_TYPE_AUTH_CODE = 'authorization_code';
	const GRANT_TYPE_REFRESH_TOKEN = 'refresh_token';

	const RESPONSE_TYPE_CODE = 'code';

	private $client_id;
	private $secret;
	private $redirect_url;

	function __construct($client_id, $secret, $redirect_url) {
		$this->client_id = $client_id;
		$this->secret = $secret;
		$this->redirect_url = $redirect_url;
	}

	public function getAuthorizeClientURL() {
		$query_params = array(
			'response_type' => FBInstantArticleOAuth2Connector::RESPONSE_TYPE_CODE,
			'client_id' => $this->client_id,
			'redirect_uri' => $this->redirect_url,
			'state' => time()
		);

		$forward_url = FBInstantArticleOAuth2Connector::OAUTH_ENDPOINT . FBInstantArticleOAuth2Connector::OAUTH_AUTHORIZATION;
		$forward_url = $forward_url . '?' . http_build_query($query_params);

		return $forward_url;
	}

	private function getAccessToken($type = FBInstantArticleOAuth2Connector::GRANT_TYPE_AUTH_CODE, $auth_code = '', $refresh_token = '') {
		$query_params = array(
			'client_id' => $this->client_id,
			'client_secret' => $this->secret,
			'grant_type' => $type,
		);

		if ($type == FBInstantArticleOAuth2Connector::GRANT_TYPE_AUTH_CODE) {
			$query_params['code'] = $auth_code;
			$query_params['redirect_uri'] = $this->redirect_url;
		}

		if ($type == FBInstantArticleOAuth2Connector::GRANT_TYPE_REFRESH_TOKEN) {
			$query_params['refresh_token'] = $refresh_token;
		}

		$options = array(
			'data' => http_build_query($query_params),
			'method' => 'POST',
			'timeout' => 120,
			'headers' => array('Content-Type' => 'application/x-www-form-urlencoded'),
		);
		$request_access_token_url = FBInstantArticleOAuth2Connector::OAUTH_ENDPOINT . FBInstantArticleOAuth2Connector::OAUTH_ACCESS_TOKEN;
		$request = $this->sendRequest($request_access_token_url, $options);

		if (isset($request->status_message) && $request->status_message == 'OK') {
			return $request->data;
		} else {
			throw new Exception($request->error, $request->code);
		}

		return $request;
	}

	public function requestAccessToken($auth_code) {
		try {
			$token = $this->getAccessToken(FBInstantArticleOAuth2Connector::GRANT_TYPE_AUTH_CODE, $auth_code, NULL);
			return $token;
		} catch(Exception $e) {
			throw $e;
		}
	}

	public function refreshAccessToken($refresh_token) {
		try {
			$token = $this->getAccessToken(FBInstantArticleOAuth2Connector::GRANT_TYPE_REFRESH_TOKEN, NULL, $refresh_token);
			return $token;
		} catch(Exception $e) {
			throw $e;
		}
	}

	public function request($access_token, $api, $method = 'GET', $params = array()) {
		$options = array(
			'data' => json_encode($params),
			'method' => $method,
			'timeout' => 60,
			'headers' => array(
				'Content-Type' => 'application/json',
				'Authorization' => $access_token->token_type . ' ' . $access_token->access_token,
			)
		);

		$request_url = FBInstantArticleOAuth2Connector::API_ENDPOINT . $api . '.json';
		$request = $this->sendRequest($request_url, $options);

		if (isset($request->status_message) && $request->status_message == 'OK') {
			return $request->data;
		} else {
			throw new Exception($request->error, $request->code);
		}

		return FALSE;

	}

	private function sendRequest($url, $options) {
		$curl = curl_init();

		if (isset($options['headers']) && !empty($options['headers'])) {
			$headers = $this->generateHeaders($options['headers']);
			curl_setopt($curl, CURLOPT_HEADER, FALSE);
			curl_setopt($curl, CURLOPT_HTTPHEADER, $headers);
		}

		if (isset($options['timeout'])) {
			curl_setopt($curl, CURLOPT_TIMEOUT, $options['timeout']);
		}

		$fields_string = '';
		if (isset($options['data'])) {
			$fields_string = $options['data'];
	    }
		if (isset($options['method']) && strtolower($options['method']) == 'post') {
			curl_setopt($curl, CURLOPT_POST, TRUE);
			curl_setopt($curl, CURLOPT_POSTFIELDS, $fields_string);
		} else {
			$url .= '?' . $fields_string;
		}
		curl_setopt($curl, CURLOPT_URL, $url);

		$ua = 'FBInstantArticleOAuth2Connector V1.0 (PHP Library)';
		curl_setopt($curl, CURLOPT_USERAGENT, $ua);

		curl_setopt($curl, CURLOPT_SSL_VERIFYPEER, FALSE);

		curl_setopt($curl, CURLOPT_RETURNTRANSFER, TRUE);

		$return = new stdClass;

		try {
			$return_str = curl_exec($curl);
			$status = curl_getinfo($curl, CURLINFO_HTTP_CODE);
			curl_close($curl);
			$return->status_message = 'OK';
			$return->data = json_decode($return_str);
			if ($status >= 400) {
				$return->status_message = 'NOT OK';
				$return->code = $status;
				$return->error = $return_str;
			}
		} catch (Exception $e) {
			$return->status_message = 'NOT OK';
			$return->data = json_encode(array(
				'code' => $e->getCode(),
				'message' => $e->getMessage(),
			));
			$return->code = 400;
			$return->error = 'Unhandled error on request.';
		}

		return $return;
	}

	private function generateHeaders($headers) {
		$return = array();

		foreach($headers as $key => $value) {
			$return[] = $key . ': ' . $value;
		}

		return $return;
	}
}

