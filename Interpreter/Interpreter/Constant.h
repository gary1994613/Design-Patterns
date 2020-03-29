#pragma once
#include "IBooleanExp.h"


class Constant : public IBooleanExp
{
public:
	Constant(bool value);
	~Constant();
	bool interpret(Context& context) override;

private:
	bool m_boolValue;
};

