#pragma once
#include "IDatabase.h"

class SqlServerDatabase : public IDatabase
{
public:
	explicit SqlServerDatabase();
	~SqlServerDatabase();
	std::unique_ptr<IAccessUser> createAccessUser() override;
	std::unique_ptr<IAccessDepartment> createAccessDepartment() override;
};

class OracleDatabase : public IDatabase
{
public:
	explicit OracleDatabase();
	~OracleDatabase();
	std::unique_ptr<IAccessUser> createAccessUser() override;
	std::unique_ptr<IAccessDepartment> createAccessDepartment() override;
};
