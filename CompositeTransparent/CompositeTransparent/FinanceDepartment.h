#pragma once
#include <list>
#include <string>
#include "IOrganization.h"

class FinanceDepartment : public IOrganization
{
public:
	explicit FinanceDepartment(std::string name);
	~FinanceDepartment();
	void add(IOrganization* organization) override;
	void remove(IOrganization* organization) override;
	void display(int depth) override;
	void getDuty() override;

private:
	std::string m_name;
};