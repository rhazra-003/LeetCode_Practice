/* Write your PL/SQL query statement below */
SELECT w1.id FROM Weather w1 inner join Weather w2
on w1.Temperature > w2.Temperature AND w1.recordDate - w2.recordDate = 1