#pragma once
#include <list>
#include <string>
#include "IOrganization.h"

class HRDepartment : public IOrganization
{
public:
	explicit HRDepartment(std::string name);
	~HRDepartment();
	void add(IOrganization* organization) override;
	void remove(IOrganization* organization) override;
	void display(int depth) override;
	void getDuty() override;

private:
	std::string m_name;
};