#include "Barbecuer.h"
#include <iostream>

Barbecuer::Barbecuer(std::string name) :
	m_name(name)
{
	std::cout << "Ctor " << m_name << std::endl;
}

Barbecuer::~Barbecuer()
{
	std::cout << "Dtor " << m_name << std::endl;
}

void Barbecuer::bakeMutton()
{
	std::cout << m_name << " bake mutton" << std::endl;
}

void Barbecuer::bakeChickenWing()
{
	std::cout << m_name << " bake chicken wing" << std::endl;
}

void Barbecuer::bakeChickenLeg()
{
	std::cout << m_name << " bake chicken leg" << std::endl;
}
