#include "CashChargeRebate.h"
#include <iostream>

CashChargeRebate::CashChargeRebate(double moneyThreshold, double moneyThresholdRebate) :
	m_moneyThreshold(moneyThreshold), m_moneyThresholdRebate(moneyThresholdRebate)
{
	std::cout << "Ctor from CashChargeRebate" << std::endl;
}

CashChargeRebate::~CashChargeRebate()
{
	std::cout << "Dtor from CashChargeRebate" << std::endl;
}

double CashChargeRebate::acceptCash(double money)
{
	double result = money - static_cast<int>(money / m_moneyThreshold)* m_moneyThresholdRebate;
	return result;
}