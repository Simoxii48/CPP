
select a=5*4,b=6/2;

select a=5*4,b=6/2
from employees;

select id,firstname,a=MonthlySalary/2
from employees;

select id,firstname+' ' + lastname as Fullname from employees;

select id, fullname = firstname + ' ' + lastname from employees;

select id, firstname, monthlysalary, yearlysalary = monthlysalary * 12
from employees;

select id, firstname, monthlysalary, yearlysalary = monthlysalary * 12, Bonusamount = monthlysalary * bonusperc
from employees;

select id, fullname = firstname + ' ' + lastname, Age= DATEDIFF(year, dateofbirth, GETDATE())
from employees;

select today = GETDATE();