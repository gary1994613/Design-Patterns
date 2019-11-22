#include "HRDepartment.h"
#include <iostream>

HRDepartment::HRDepartment(std::string name) :
	m_name(name)
{
	std::cout << "Ctor " << m_name << std::endl;
}

HRDepartment::~HRDepartment()
{
	std::cout << "Dtor " << m_name << std::endl;
}

void HRDepartment::add(IOrganization* organization)
{
}

void HRDepartment::remove(IOrganization* organization)
{
}

void HRDepartment::display(int depth)
{
	std::string prefixString(depth, '-');
	std::cout << prefixString << m_name << std::endl;
}

void HRDepartment::getDuty()
{
	std::cout << m_name << ": Recruit, hire, and train new employees" << std::endl;
}