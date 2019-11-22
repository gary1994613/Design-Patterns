#pragma once
#include "IOperation.h"

class OperationAdd : public IOperation
{
public:
	OperationAdd(double numberA, double numberB);
	double getResult() override;
};

class OperationSub : public IOperation
{
public:
	OperationSub(double numberA, double numberB);
	double getResult() override;
};

class OperationMul : public IOperation
{
public:
	OperationMul(double numberA, double numberB);
	double getResult() override;
};

class OperationDiv : public IOperation
{
public:
	OperationDiv(double numberA, double numberB);
	double getResult() override;
};