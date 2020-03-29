#include "ConcreteMobileBrand.h"
#include <iostream>

MobileBrandA::MobileBrandA()
{
	std::cout << "Ctor MobileBrandA" << std::endl;
}
	
MobileBrandA::~MobileBrandA()
{
	std::cout << "Dtor MobileBrandA" << std::endl;
}

void MobileBrandA::run()
{
	std::cout << "In MobileBrandA ";
	m_mobileApp->run();
}


MobileBrandB::MobileBrandB()
{
	std::cout << "Ctor MobileBrandB" << std::endl;
}
	
MobileBrandB::~MobileBrandB()
{
	std::cout << "Dtor MobileBrandB" << std::endl;
}
	
void MobileBrandB::run()
{
	std::cout << "In MobileBrandB ";
	m_mobileApp->run();
}
