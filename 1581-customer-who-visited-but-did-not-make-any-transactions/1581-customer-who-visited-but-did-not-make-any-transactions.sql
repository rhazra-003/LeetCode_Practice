/* Write your PL/SQL query statement below */
SELECT customer_id, COUNT(customer_id) as count_no_trans
FROM Visits NATURAL LEFT JOIN Transactions
WHERE transaction_id is NULL
GROUP BY customer_id;