#pragma once
#include <memory>
#include "IAccessUser.h"
#include "IAccessDepartment.h"

class IDatabase
{
public:
	virtual ~IDatabase() {};
	virtual std::unique_ptr<IAccessUser> createAccessUser() = 0;
	virtual std::unique_ptr<IAccessDepartment> createAccessDepartment() = 0;
};
