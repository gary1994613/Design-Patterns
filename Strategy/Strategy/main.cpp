#include <iostream>
#include "CashChargeContext.h"

int main()
{
	std::cout << "Test Strategy !\n";
	auto cashChargeContext = std::make_unique<CashChargeContext>();

	auto cashChargeNormalTest = std::make_shared<CashChargeNormal>();
	cashChargeContext->setCashCharge(cashChargeNormalTest);
	std::cout << cashChargeContext->getResult(1000) << std::endl;

	auto cashChargeDiscountTest = std::make_shared<CashChargeDiscount>(0.7);
	cashChargeContext->setCashCharge(cashChargeDiscountTest);
	std::cout << cashChargeContext->getResult(1000) << std::endl;

	auto cashChargeRebateTest = std::make_shared<CashChargeRebate>(300, 150);
	cashChargeContext->setCashCharge(cashChargeRebateTest);
	std::cout << cashChargeContext->getResult(1000) << std::endl;
}