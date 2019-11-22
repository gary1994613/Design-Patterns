#pragma once
#include "IAccessDepartment.h"

class SqlServerAccessDepartment : public IAccessDepartment
{
public:
	explicit SqlServerAccessDepartment();
	~SqlServerAccessDepartment();
	void insert(Department department) override;
	Department getDepartment(int id) override;
};

class OracleAccessDepartment : public IAccessDepartment
{
public:
	explicit OracleAccessDepartment();
	~OracleAccessDepartment();
	void insert(Department department) override;
	Department getDepartment(int id) override;
};
