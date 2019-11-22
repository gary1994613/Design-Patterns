#pragma once
#include "ICashCharge.h"

class CashChargeDiscount : public ICashCharge
{
public:
	explicit CashChargeDiscount(double discountFactor);
	~CashChargeDiscount();
	double acceptCash(double money) override;

private:
	double m_discountFactor;
};

