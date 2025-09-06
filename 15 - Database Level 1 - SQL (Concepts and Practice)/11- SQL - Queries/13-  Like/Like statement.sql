
select * from employees;

-- Finds any values that start with "a"
select ID, Firstname from employees
where Firstname like 'a%';

-- Find any values that ends with "a"
select ID, Firstname from employees
where Firstname like '%a';

-- Find any values that have "tell" in any position
select ID, Firstname from employees
where Firstname like '%tell%';

-- Find any values tha start with "a" and ends with "a"
select ID, Firstname from employees
where Firstname like 'a%a';

-- Find any values that have "a" in the second position
select ID, Firstname from employees
where Firstname like '_a%';

-- Find any values that have "a" in the third position
select ID, Firstname from employees
where Firstname like '__a%';

-- Find any values that start with "a" and are at least 3 chars in length
select ID, Firstname from employees
where Firstname like 'a__%';

-- Find any values that start with "a" and are at least 4 chars in length
select ID, Firstname from employees
where Firstname like 'a____%';