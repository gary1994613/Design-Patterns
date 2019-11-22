#pragma once
#include "IOperation.h"

class OperationFactory
{
public:
	enum OPERATION_TYPE {
		ADD_OPERATION,
		SUB_OPERATION,
		MUL_OPERATION,
		DIV_OPERATION
	};

	IOperation* createOperation(OPERATION_TYPE type, double numberA, double numberB);
};

