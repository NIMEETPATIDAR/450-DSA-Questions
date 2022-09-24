# Write your MySQL query statement below

select customers.name as Customers
from Customers left join Orders
on Customers.id=Orders.customerId
where orders.customerId is NULL;
