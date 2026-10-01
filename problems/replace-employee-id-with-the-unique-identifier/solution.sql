# Write your MySQL query statement below
SELECT e1.unique_id,e2.name
FROM EmployeeUNI e1
right join Employees e2
on e1.id=e2.id;