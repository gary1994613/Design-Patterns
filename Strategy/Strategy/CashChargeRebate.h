#pragma once
#include "ICashCharge.h"

class CashChargeRebate : public ICashCharge
{
public:
	explicit CashChargeRebate(double moneyThreshold, double moneyThresholdRebate);
	~CashChargeRebate();
	double acceptCash(double money) override;

private:
	double m_moneyThreshold;
	double m_moneyThresholdRebate;
};

