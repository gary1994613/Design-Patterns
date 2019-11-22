#include "IOperation.h"

IOperation::IOperation(double numberA, double numberB) :
	m_numberA(numberA), m_numberB(numberB)
{
}

void IOperation::setNumberA(double numberA)
{
	this->m_numberA = numberA;
}
void IOperation::setNumberB(double numberB)
{
	this->m_numberB = numberB;
}