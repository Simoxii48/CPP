
select TotalCount = count(monthlysalary),
		TotalSum = sum(monthlysalary),
		Average = avg(monthlysalary),
		MinSalary = min(monthlysalary),
		MaxSalary = max(monthlysalary)
		from employees;


select TotalCount = count(monthlysalary),
		TotalSum = sum(monthlysalary),
		Average = avg(monthlysalary),
		MinSalary = min(monthlysalary),
		MaxSalary = max(monthlysalary)
		from employees where DepartmentID = 1;

select TotalEmployees = count(id) from employees;

select ResignedEmployees = count(exitdate) from employees;

