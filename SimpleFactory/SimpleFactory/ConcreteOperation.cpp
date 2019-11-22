#include "ConcreteOperation.h"

OperationAdd::OperationAdd(double numberA, double numberB) :
	IOperation(numberA, numberB)
{
}

double OperationAdd::getResult()
{
	return m_numberA + m_numberB;
}

OperationSub::OperationSub(double numberA, double numberB) :
	IOperation(numberA, numberB)
{
}

double OperationSub::getResult()
{
	return m_numberA - m_numberB;
}

OperationMul::OperationMul(double numberA, double numberB) :
	IOperation(numberA, numberB)
{
}

double OperationMul::getResult()
{
	return m_numberA * m_numberB;
}

OperationDiv::OperationDiv(double numberA, double numberB) :
	IOperation(numberA, numberB)
{
}

double OperationDiv::getResult()
{
	if (m_numberB == 0)
		throw "numberB can't be zero";
	return m_numberA / m_numberB;
}
