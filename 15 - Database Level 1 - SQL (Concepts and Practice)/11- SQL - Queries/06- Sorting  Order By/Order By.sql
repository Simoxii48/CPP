
select id, firstname, monthlysalary from employees
where departmentid=1;

select id, firstname, monthlysalary from employees
where departmentid=1
order by FirstName asc; -- ascending is by default even you don't mention it

select id, firstname, monthlysalary from employees
where departmentid=1
order by FirstName desc;

select id, firstname, monthlysalary from employees
where departmentid=1
order by MonthlySalary desc;

select id, firstname, monthlysalary from employees
where departmentid=1
order by MonthlySalary;

select id, firstname, monthlysalary from employees
where departmentid=1
order by FirstName, MonthlySalary;

select id, firstname, monthlysalary from employees
where departmentid=1
order by FirstName asc, MonthlySalary desc;