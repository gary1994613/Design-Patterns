#pragma once
#include "User.h"

class IAccessUser
{
public:
	virtual ~IAccessUser() {};
	virtual void insert(User user) = 0;
	virtual User getUser(int id) = 0;
};