#include "RealEstate.h"
#include <iostream>


RealEstate::RealEstate(std::string name) :
	m_name(name)
{
	std::cout << "Ctor RealEstate" << std::endl;
}

RealEstate::~RealEstate()
{
	std::cout << "Dtor RealEstate" << std::endl;
}

void RealEstate::buy()
{
	std::cout << "buy RealEstate " << m_name << std::endl;
}

void RealEstate::sell()
{
	std::cout << "sell RealEstate " << m_name << std::endl;
}