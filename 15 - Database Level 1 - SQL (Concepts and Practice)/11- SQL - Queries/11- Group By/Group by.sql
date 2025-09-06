
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

select DepartmentId, TotalCount = count(monthlysalary),
		TotalSum = sum(monthlysalary),
		Average = avg(monthlysalary),
		MinSalary = min(monthlysalary),
		MaxSalary = max(monthlysalary)
		from employees
		group by DepartmentID
		order by DepartmentID;