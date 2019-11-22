#include "IPerson.h"
#include <iostream>

IPerson::IPerson(std::string name) :
	m_name(name)
{
	std::cout << "Ctor person " << m_name << std::endl;
}

IPerson::~IPerson()
{
	std::cout << "Dtor person " << m_name << std::endl;
}

void IPerson::sweepFloor()
{
	std::cout << m_name << " sweeps the floor." << std::endl;
}

void IPerson::doLaundry()
{
	std::cout << m_name << " does the laundry." << std::endl;
}

void IPerson::goShopping()
{
	std::cout << m_name << " goes shopping." << std::endl;
}