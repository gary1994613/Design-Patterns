#include "OperationFactory.h"
#include "ConcreteOperation.h"

IOperation* OperationFactory::createOperation(OPERATION_TYPE type, double numberA, double numberB)
{
	IOperation* pOperation = nullptr;
	switch (type) {
	case OPERATION_TYPE::ADD_OPERATION:
		pOperation = new OperationAdd(numberA, numberB);
		break;
	case OPERATION_TYPE::SUB_OPERATION:
		pOperation = new OperationSub(numberA, numberB);
		break;
	case OPERATION_TYPE::MUL_OPERATION:
		pOperation = new OperationMul(numberA, numberB);
		break;
	case OPERATION_TYPE::DIV_OPERATION:
		pOperation = new OperationDiv(numberA, numberB);
		break;
	default:
		break;
	}

	return pOperation;
}
