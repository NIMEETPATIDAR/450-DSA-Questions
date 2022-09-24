# Write your MySQL query statement below

/*
select customers.name as Customers
from Customers left join Orders
on Customers.id=Orders.customerId
where orders.customerId is NULL;
*/

select customers.name as Customers
from Customers
where customers.id not in(select orders.customerId from Orders);