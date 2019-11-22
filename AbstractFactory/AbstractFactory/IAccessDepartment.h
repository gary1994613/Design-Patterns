#pragma once
#include "Department.h"

class IAccessDepartment
{
public:
	virtual ~IAccessDepartment() {};
	virtual void insert(Department department) = 0;
	virtual Department getDepartment(int id) = 0;
};