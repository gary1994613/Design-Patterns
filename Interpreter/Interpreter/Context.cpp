#include "Context.h"

Context::Context()
{
}

Context::~Context()
{
}

bool Context::lookup(std::string variableName)
{
    std::map<std::string, bool>::iterator it = variableMap.find(variableName);
	return it->second;
}
	
void Context::assign(std::string variableName, bool value)
{
	variableMap[variableName] = value;
}
