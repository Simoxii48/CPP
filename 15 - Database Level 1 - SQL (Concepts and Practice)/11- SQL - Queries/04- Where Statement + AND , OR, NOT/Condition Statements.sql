select * from Employees
where gendor = 'f';

select * from Employees
where MonthlySalary < 500;

select * from Employees
where MonthlySalary < 500 and gendor = 'f';

select * from Employees
where CountryID=1;

select * from Employees
where not CountryID=1;

select * from Employees
where CountryID<>1; -- <> equals !=

select * from Employees
where DepartmentID=1;

select * from Employees
where DepartmentID=1 and gendor = 'm';

select * from Employees
where DepartmentID=1 or DepartmentID=2;

select * from Employees
where DepartmentID=1 And DepartmentID=2; -- will result nothing because the employee works in only 1 department

select * from Employees
where ExitDate is null;

select * from Employees
where ExitDate is not null;