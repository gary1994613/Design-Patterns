#pragma once

class IOrganization
{
public:
	virtual ~IOrganization() {};
	virtual void display(int depth) = 0;
	virtual void getDuty() = 0;
};

