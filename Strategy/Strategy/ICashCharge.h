#pragma once

class ICashCharge
{
public:
	virtual ~ICashCharge() {};
	virtual double acceptCash(double money) = 0;
};

