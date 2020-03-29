#pragma once
#include <string>

class RealEstate
{
public:
	RealEstate(std::string name);
	~RealEstate();
	void buy();
	void sell();

private:
	std::string m_name;
};
