#pragma once
#include "IAccessUser.h"

class SqlServerAccessUser : public IAccessUser
{
public:
	explicit SqlServerAccessUser();
	~SqlServerAccessUser();
	void insert(User user) override;
	User getUser(int id) override;
};

class OracleAccessUser : public IAccessUser
{
public:
	explicit OracleAccessUser();
	~OracleAccessUser();
	void insert(User user) override;
	User getUser(int id) override;
};
