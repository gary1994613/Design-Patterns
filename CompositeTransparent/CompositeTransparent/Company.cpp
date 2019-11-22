#include "Company.h"
#include <iostream>

Company::Company(std::string name) :
	m_name(name)
{
	std::cout << "Ctor " << m_name << std::endl;
}

Company::~Company()
{
	std::cout << "Dtor " << m_name << std::endl;
}

void Company::add(IOrganization* organization)
{
	m_list.push_back(organization);
}

void Company::remove(IOrganization* organization)
{
	m_list.remove(organization);
}

void Company::display(int depth)
{
	std::string prefixString(depth, '-');
	std::cout << prefixString << m_name << std::endl;

	for (auto organization : m_list)
		organization->display(depth + 2);
}

void Company::getDuty()
{
	for (auto organization : m_list)
		organization->getDuty();
}