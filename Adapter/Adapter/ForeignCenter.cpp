#include "ForeignCenter.h"
#include <iostream>

ForeignCenter::ForeignCenter(std::string name) :
	m_name(name)
{
	std::cout << "Ctor " << m_name << std::endl;
}

ForeignCenter::~ForeignCenter()
{
	std::cout << "Dtor " << m_name << std::endl;
}

void ForeignCenter::attack()
{
	std::cout << m_name << " attack" << std::endl;
}

void ForeignCenter::protect()
{
	std::cout << m_name << " protect" << std::endl;
}