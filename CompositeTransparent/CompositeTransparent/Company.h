#pragma once
#include <list>
#include <string>
#include "IOrganization.h"

class Company : public IOrganization
{
public:
	explicit Company(std::string name);
	~Company();
	void add(IOrganization* organization) override;
	void remove(IOrganization* organization) override;
	void display(int depth) override;
	void getDuty() override;

private:
	std::string m_name;
	std::list<IOrganization*> m_list;
};
