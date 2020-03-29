#include "Girl.h"
#include <iostream>

Girl::Girl(std::string name) :
	m_name(name)
{
	std::cout << "Ctor Girl " << m_name << std::endl;
}

Girl::~Girl()
{
	std::cout << "Dtor Girl " << m_name << std::endl;
}

std::string Girl::getName()
{
	return m_name;
}
