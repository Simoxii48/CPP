SELECT        Customers.CustomerID, Customers.Name, Orders.Amount
FROM            Customers LEFT OUTER JOIN
                         Orders ON Customers.CustomerID = Orders.CustomerID;

						 -- Left outer join & left join are the same
SELECT        Customers.CustomerID, Customers.Name, Orders.Amount
FROM            Customers LEFT JOIN
                         Orders ON Customers.CustomerID = Orders.CustomerID;