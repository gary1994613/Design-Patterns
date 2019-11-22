#include "FinanceDepartment.h"
#include <iostream>

FinanceDepartment::FinanceDepartment(std::string name) :
	m_name(name)
{
	std::cout << "Ctor " << m_name << std::endl;
}

FinanceDepartment::~FinanceDepartment()
{
	std::cout << "Dtor " << m_name << std::endl;
}

void FinanceDepartment::display(int depth)
{
	std::string prefixString(depth, '-');
	std::cout << prefixString << m_name << std::endl;
}

void FinanceDepartment::getDuty()
{
	std::cout << m_name << ": Plan, account for and controll company's finances" << std::endl;
}