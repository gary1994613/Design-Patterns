#pragma once
class IOperation
{
public:
	IOperation(double numberA, double numberB);

	virtual double getResult() = 0;

	void setNumberA(double numberA);
	void setNumberB(double numberB);

protected:
	double m_numberA = 0;
	double m_numberB = 0;
};