#include "Fund.h"

Fund::Fund()
{
	stock1 = std::make_unique<Stock>("Stock1");
	stock2 = std::make_unique<Stock>("Stock2");
	stock3 = std::make_unique<Stock>("Stock3");
	nationalDebt1 = std::make_unique<NationalDebt>("NationalDebt1");
	realEstate1 = std::make_unique<RealEstate>("RealEstate1");
}

Fund::~Fund()
{
}

void Fund::buy()
{
	stock1->buy();
	stock2->buy();
	stock3->buy();
	nationalDebt1->buy();
	realEstate1->buy();
}

void Fund::sell()
{
	stock1->sell();
	stock2->sell();
	stock3->sell();
	nationalDebt1->sell();
	realEstate1->sell();
}