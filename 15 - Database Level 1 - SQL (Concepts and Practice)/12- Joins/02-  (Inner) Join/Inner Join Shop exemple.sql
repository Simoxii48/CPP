
select * from Customers;
select * from Orders;

select Customers.CustomerID, Customers.Name, Orders.Amount
from Customers
join Orders
on Customers.CustomerID = Orders.CustomerID;

-- join & inner join are the same
select Customers.CustomerID, Customers.Name, Orders.Amount
from Customers
inner join Orders
on Customers.CustomerID = Orders.CustomerID;