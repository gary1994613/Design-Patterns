#pragma once
#include <map>
#include <string>
//#include "VariableExp.h"


class Context
{
public:
	Context();
	~Context();
	bool lookup(std::string variableName);
	void assign(std::string variableName, bool value);

private:
	std::map<std::string, bool> variableMap;
};

