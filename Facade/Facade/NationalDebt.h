#pragma once
#include <string>

class NationalDebt
{
public:
	NationalDebt(std::string name);
	~NationalDebt();
	void buy();
	void sell();

private:
	std::string m_name;
};
