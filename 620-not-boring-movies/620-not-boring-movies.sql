# Write your MySQL query statement below

select * from Cinema where not description = 'boring' and (id%2) <> 0 order by rating desc;