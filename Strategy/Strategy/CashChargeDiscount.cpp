#include "CashChargeDiscount.h"
#include <iostream>

CashChargeDiscount::CashChargeDiscount(double discountFactor) :
	m_discountFactor(discountFactor)
{
	std::cout << "Ctor from CashChargeDiscount" << std::endl;
}

CashChargeDiscount::~CashChargeDiscount()
{
	std::cout << "Dtor from CashChargeDiscount" << std::endl;
}

double CashChargeDiscount::acceptCash(double money)
{
	return money * m_discountFactor;
}