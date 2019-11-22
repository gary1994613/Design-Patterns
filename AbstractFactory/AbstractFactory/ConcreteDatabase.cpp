#include "ConcreteDatabase.h"
#include <iostream>
#include "ConcreteAccessUser.h"
#include "ConcreteAccessDepartment.h"


SqlServerDatabase::SqlServerDatabase()
{
	std::cout << "Ctor SqlServerDatabase" << std::endl;
}

SqlServerDatabase::~SqlServerDatabase()
{
	std::cout << "Dtor SqlServerDatabase" << std::endl;
}

std::unique_ptr<IAccessUser> SqlServerDatabase::createAccessUser()
{
	return std::make_unique<SqlServerAccessUser>();
}

std::unique_ptr<IAccessDepartment> SqlServerDatabase::createAccessDepartment()
{
	return std::make_unique<SqlServerAccessDepartment>();
}


OracleDatabase::OracleDatabase()
{
	std::cout << "Ctor OracleDatabase" << std::endl;
}

OracleDatabase::~OracleDatabase()
{
	std::cout << "Dtor OracleDatabase" << std::endl;
}

std::unique_ptr<IAccessUser> OracleDatabase::createAccessUser()
{
	return std::make_unique<OracleAccessUser>();
}

std::unique_ptr<IAccessDepartment> OracleDatabase::createAccessDepartment()
{
	return std::make_unique<OracleAccessDepartment>();
}