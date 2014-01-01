I added a subquery to get or compute for the lesser count field.

This is how I compute for the lesser count:
1. cross join two subqueries that get the sum of role weights
 - compare first subquery and second subquery to get all lesser sum of role weights
2. get count of the results of the two cross joined subqueries to get the count of lesser users
