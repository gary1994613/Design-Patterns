#include "CashChargeNormal.h"
#include <iostream>

CashChargeNormal::CashChargeNormal()
{
	std::cout << "Ctor from CashChargeNormal" << std::endl;
}

CashChargeNormal::~CashChargeNormal()
{
	std::cout << "Dtor from CashChargeNormal" << std::endl;
}

double CashChargeNormal::acceptCash(double money)
{
	return money;
}
