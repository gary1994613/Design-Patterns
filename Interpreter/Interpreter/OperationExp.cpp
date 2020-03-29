#include "OperationExp.h"
#include <iostream>


AndExp::AndExp(IBooleanExp* operand1, IBooleanExp* operand2) :
	m_operand1(operand1), m_operand2(operand2)
{
	std::cout << "Ctor of AndExp" << std::endl;
}

AndExp::~AndExp()
{
	std::cout << "Dtor of AndExp" << std::endl;
}

bool AndExp::interpret(Context& context)
{
	return m_operand1->interpret(context) && m_operand2->interpret(context);
}


OrExp::OrExp(IBooleanExp* operand1, IBooleanExp* operand2) :
	m_operand1(operand1), m_operand2(operand2)
{
	std::cout << "Ctor of OrExp" << std::endl;
}
	
OrExp::~OrExp()
{
	std::cout << "Dtor of OrExp" << std::endl;
}
	
bool OrExp::interpret(Context& context)
{
	return m_operand1->interpret(context) || m_operand2->interpret(context);
}


NotExp::NotExp(IBooleanExp* operand) :
	m_operand(operand)
{
	std::cout << "Ctor of NotExp" << std::endl;
}
	
NotExp::~NotExp()
{
	std::cout << "Dtor of NotExp" << std::endl;
}
	
bool NotExp::interpret(Context& context)
{
	return !m_operand->interpret(context);
}