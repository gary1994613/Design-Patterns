#include "CashChargeContext.h"
#include <iostream>

CashChargeContext::CashChargeContext()
{
	std::cout << "Ctor from CashChargeContext" << std::endl;
}

CashChargeContext::~CashChargeContext()
{
	std::cout << "Dtor from CashChargeContext" << std::endl;
}

void CashChargeContext::setCashCharge(std::shared_ptr<ICashCharge> cashCharge)
{
	m_ICashCharge = cashCharge;
}

double CashChargeContext::getResult(double money)
{
	return m_ICashCharge->acceptCash(money);
}