#pragma once
#include "ICashCharge.h"

class CashChargeNormal : public ICashCharge
{
public:
	explicit CashChargeNormal();
	~CashChargeNormal();
	double acceptCash(double money) override;
};

