#pragma once
#include <string>

class Stock
{
public:
	Stock(std::string name);
	~Stock();
	void buy();
	void sell();

private:
	std::string m_name;
};

