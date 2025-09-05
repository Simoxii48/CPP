
select * from employees;

select top 5 * from employees;

select top 10 percent * from employees;

select monthlysalary from employees
order by MonthlySalary desc;

select distinct monthlysalary from employees
order by MonthlySalary desc;

select distinct top 3 monthlysalary from employees
order by MonthlySalary desc;

select id, firstname, monthlysalary from employees
where monthlysalary in (
select distinct top 3 monthlysalary from employees
order by MonthlySalary desc)
order by MonthlySalary desc;

select id, firstname, monthlysalary from employees
where monthlysalary in (
select distinct top 3 monthlysalary from employees
order by MonthlySalary asc)
order by MonthlySalary asc;