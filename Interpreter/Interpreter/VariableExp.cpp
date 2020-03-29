#include "VariableExp.h"
#include <iostream>

VariableExp::VariableExp(const std::string name) : 
	m_name(name)
{
	std::cout << "Ctor of VariableExp: " << getName() << std::endl;
}

VariableExp::~VariableExp()
{
	std::cout << "Dtor of VariableExp: " << getName() << std::endl;
}

bool VariableExp::interpret(Context& context)
{
	return context.lookup(m_name);
}

std::string VariableExp::getName()
{
	return m_name;
}
