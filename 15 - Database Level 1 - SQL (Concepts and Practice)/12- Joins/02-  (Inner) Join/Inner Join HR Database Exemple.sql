
SELECT        Employees.ID, Employees.FirstName, Employees.LastName, Departments.Name as DeprtName
FROM            Employees INNER JOIN
                         Departments ON Employees.DepartmentID = Departments.ID;

SELECT        Countries.Name as Country, Employees.ID, Employees.FirstName, Employees.LastName, Departments.Name AS DeprtName
FROM            Countries INNER JOIN
                         Departments ON Countries.ID = Departments.ID INNER JOIN
                         Employees ON Countries.ID = Employees.CountryID AND Departments.ID = Employees.DepartmentID;
