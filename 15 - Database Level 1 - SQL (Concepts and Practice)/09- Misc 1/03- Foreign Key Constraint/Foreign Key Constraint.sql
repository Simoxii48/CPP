
-- This table does not have a foreign key
create table Customers (
id int,
first_name varchar(40),
last_name varchar(40),
age int,
country varchar(10),
primary key (id)
);

-- Adding forein key to the customer_id field
-- The foreign key references to the id field of the Customers
create table Orders (
order_id int,
item varchar(40),
amount int,
customer_id int references Customers(id),
primary key (order_id)
);

-- Second way to add foreign key if not added within table creation
alter table Orders
add foreign key (customer_id) references Customers(id);