
select * from Departments;

-- Delete will delete all rows but will not reset the identity counter
delete from Departments;

-- Truncate will delete all rows and reset identity counter
truncate table Departments;

insert into Departments
values ('HR');

print @@identity;