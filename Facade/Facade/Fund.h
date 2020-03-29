#pragma once
#include "Stock.h"
#include "NationalDebt.h"
#include "RealEstate.h"
#include <memory>

class Fund
{
public:
	Fund();
	~Fund();
	void buy();
	void sell();

private:
	std::unique_ptr<Stock> stock1;
	std::unique_ptr<Stock> stock2;
	std::unique_ptr<Stock> stock3;
	std::unique_ptr<NationalDebt> nationalDebt1;
	std::unique_ptr<RealEstate> realEstate1;
};

