#include "Constant.h"
#include <iostream>


Constant::Constant(bool value) :
	m_boolValue(value)
{
	std::cout << "Ctor of Constant" << std::endl;
}

Constant::~Constant()
{
	std::cout << "Dtor of Constant" << std::endl;
}

bool Constant::interpret(Context& context)
{
	return m_boolValue;
}