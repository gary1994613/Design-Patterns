#pragma once
#include <string>
#include "IBooleanExp.h"


class VariableExp : public IBooleanExp
{
public:
	VariableExp(const std::string name);
	~VariableExp();
	bool interpret(Context& context) override;
	std::string getName();

private:
	std::string m_name;
};

