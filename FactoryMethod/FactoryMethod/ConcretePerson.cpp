#include "ConcretePerson.h"
#include <iostream>

Undergraduate::Undergraduate(std::string name) :
	IPerson(name)
{
	std::cout << "Ctor undergraduate " << m_name << std::endl;
}

Undergraduate::~Undergraduate()
{
	std::cout << "Dtor undergraduate " << m_name << std::endl;
}


Volunteer::Volunteer(std::string name) :
	IPerson(name)
{
	std::cout << "Ctor volunteer " << m_name << std::endl;
}

Volunteer::~Volunteer()
{
	std::cout << "Dtor volunteer " << m_name << std::endl;
}
