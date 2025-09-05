select DepartmentID from Employees;

-- Distinct will not allow the duplications of departmentID
select distinct DepartmentID from Employees;

-- Will result all firstnames with duplications
select firstname from Employees;

-- Will result only non duplicated firstnames
select distinct firstname from Employees;

-- Will result all the firstnames & departmentids duplicated
select firstname, departmentid from Employees;

-- Will result a non duplicated entire row (Firstname & DepartmentID will be duplicated)
select distinct firstname, departmentid from Employees;