#include "ConcreteAccessUser.h"
#include <iostream>

SqlServerAccessUser::SqlServerAccessUser()
{
	std::cout << "Ctor SqlServerAccessUser" << std::endl;
}

SqlServerAccessUser::~SqlServerAccessUser()
{
	std::cout << "Dtor SqlServerAccessUser" << std::endl;
}

void SqlServerAccessUser::insert(User user)
{
	std::cout << "Add User " << user.getName() << " to SQL Server" << std::endl;
}

User SqlServerAccessUser::getUser(int id)
{
	std::cout << "Find User from SQL Server by id: " << id << std::endl;
	return User();
}


OracleAccessUser::OracleAccessUser()
{
	std::cout << "Ctor OracleAccessUser" << std::endl;
}

OracleAccessUser::~OracleAccessUser()
{
	std::cout << "Dtor OracleAccessUser" << std::endl;
}

void OracleAccessUser::insert(User user)
{
	std::cout << "Add User " << user.getName() << " to Oracle" << std::endl;
}

User OracleAccessUser::getUser(int id)
{
	std::cout << "Find User from Oracle by id: " << id << std::endl;
	return User();
}