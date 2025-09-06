

select DepartmentId, TotalCount = count(monthlysalary),
		TotalSum = sum(monthlysalary),
		Average = avg(monthlysalary),
		MinSalary = min(monthlysalary),
		MaxSalary = max(monthlysalary)
		from employees
		group by DepartmentID
		having count(monthlysalary) > 100; -- is like a where statement works with group by


		-- Using another method to use where statement
		select * from 
		(
		select DepartmentId, TotalCount = count(monthlysalary),
		TotalSum = sum(monthlysalary),
		Average = avg(monthlysalary),
		MinSalary = min(monthlysalary),
		MaxSalary = max(monthlysalary)
		from employees
		group by DepartmentID
		) 
		R1 
		where R1.TotalCount > 100;