#pragma once

class IOrganization
{
public:
	virtual ~IOrganization() {};
	virtual void add(IOrganization* organization) = 0;
	virtual void remove(IOrganization* organization) = 0;
	virtual void display(int depth) = 0;
	virtual void getDuty() = 0;
};

