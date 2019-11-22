#include <iostream>
#include <memory>
#include "IOperation.h"
#include "OperationFactory.h"

int main()
{
	std::cout << "Test Simple Factory !\n";
	auto operationFactory = std::make_unique<OperationFactory>();

	auto operationAddTest = std::unique_ptr<IOperation>(operationFactory->createOperation(OperationFactory::ADD_OPERATION, 1, 4));
	double resultAdd = operationAddTest->getResult();
	std::cout << resultAdd << std::endl;

	auto operationSubTest = std::unique_ptr<IOperation>(operationFactory->createOperation(OperationFactory::SUB_OPERATION, 2, 3));
	double resultSub = operationSubTest->getResult();
	std::cout << resultSub << std::endl;

	auto operationMulTest = std::unique_ptr<IOperation>(operationFactory->createOperation(OperationFactory::MUL_OPERATION, 3, 6));
	double resultMul = operationMulTest->getResult();
	std::cout << resultMul << std::endl;

	auto operationDivTest = std::unique_ptr<IOperation>(operationFactory->createOperation(OperationFactory::DIV_OPERATION, 9, 5));
	double resultDiv = operationDivTest->getResult();
	std::cout << resultDiv << std::endl;
}