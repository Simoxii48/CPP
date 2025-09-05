select * from Employees
where DepartmentID=1 or DepartmentID=2;

select * from Employees
where DepartmentID=1 or DepartmentID=2 or DepartmentID=5;

select * from Employees
where DepartmentID=1 or DepartmentID=2 or DepartmentID=5 or DepartmentID=7;

select * from Employees
where DepartmentID in (1,2,5,7); -- Resulting the same result as the last query

select * from Employees
where FirstName in ('jacob','brooks','harper');

select Departments.Name from Departments
where id in (select Departmentid from employees where MonthlySalary <= 210);

