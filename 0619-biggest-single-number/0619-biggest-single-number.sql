/* Write your PL/SQL query statement below */

select max(num) as num from MyNumbers where num in(select num from myNumbers  group by num having count(num)=1)