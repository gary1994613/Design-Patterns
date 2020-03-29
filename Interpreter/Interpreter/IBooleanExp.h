#pragma once
#include "Context.h"

class IBooleanExp
{
public:
	virtual ~IBooleanExp() {};
	virtual bool interpret(Context& context) = 0;
};

