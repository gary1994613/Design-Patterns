#pragma once
#include <memory>
#include "ICashCharge.h"
#include "CashChargeNormal.h"
#include "CashChargeDiscount.h"
#include "CashChargeRebate.h"

class CashChargeContext
{
public:
	explicit CashChargeContext();
	~CashChargeContext();
	void setCashCharge(std::shared_ptr<ICashCharge> cashCharge);
	double getResult(double money);

private:
	std::shared_ptr<ICashCharge> m_ICashCharge;
};

