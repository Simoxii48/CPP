
update employees
set FirstName = 'Mohammed', LastName= 'Abu-Hadhoud'
where id = 285;

update employees
set FirstName = 'Mohammad', LastName= 'Maher'
where id = 286;

select ID, Firstname, LastName from Employees
where firstname = 'Mohammed' or Firstname = 'Mohammad';

-- Will search for Mohammed or Mohammad
select ID, Firstname, LastName from Employees
where firstname like 'Mohamm[ae]d';

-- You can use not
select ID, Firstname, LastName from Employees
where firstname not like 'Mohamm[ae]d';

select ID, Firstname, LastName from Employees
where firstname like 'a%' or firstname like 'b%' or firstname like 'c%';

-- Search for all employees that their firstname start with a or b or c
select ID, Firstname, LastName from Employees
where firstname like '[abc]%';

-- Search for all employees that their firstname start with any letter from a to l
select ID, Firstname, LastName from Employees
where firstname like '[a-l]%';