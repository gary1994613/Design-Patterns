#include "ConcreteAccessDepartment.h"
#include "ConcreteAccessDepartment.h"
#include <iostream>

SqlServerAccessDepartment::SqlServerAccessDepartment()
{
	std::cout << "Ctor SqlServerAccessDepartment" << std::endl;
}

SqlServerAccessDepartment::~SqlServerAccessDepartment()
{
	std::cout << "Dtor SqlServerAccessDepartment" << std::endl;
}

void SqlServerAccessDepartment::insert(Department department)
{
	std::cout << "Add Department " << department.getName() << " to SQL Server" << std::endl;
}

Department SqlServerAccessDepartment::getDepartment(int id)
{
	std::cout << "Find Department from SQL Server by id: " << id << std::endl;
	return Department();
}


OracleAccessDepartment::OracleAccessDepartment()
{
	std::cout << "Ctor OracleAccessDepartment" << std::endl;
}

OracleAccessDepartment::~OracleAccessDepartment()
{
	std::cout << "Dtor OracleAccessDepartment" << std::endl;
}

void OracleAccessDepartment::insert(Department department)
{
	std::cout << "Add Department " << department.getName() << " to Oracle" << std::endl;
}

Department OracleAccessDepartment::getDepartment(int id)
{
	std::cout << "Find Department from Oracle by id: " << id << std::endl;
	return Department();
}