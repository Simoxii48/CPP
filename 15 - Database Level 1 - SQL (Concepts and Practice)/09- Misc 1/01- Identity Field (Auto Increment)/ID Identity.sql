

select * from Departments;

insert into Departments
values ('HR'); -- Cannot insert the ID While it's an auto increment from the sql

print @@identity; -- will print the last id number inserted

delete from Departments; -- will delete all the data but will not make the id goes back to 0, as soon as you insert new data the last id number will continue incresing

-- Create a table with an auto increment id with the script

create table Departments2
(
ID int identity (1,1) not null,
Name nvarchar(20) not null,
primary key (ID)
);

select * from Departments2;

insert into Departments2
values ('Marketing');