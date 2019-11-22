#pragma once
#include <string>

class Barbecuer
{
public:
	Barbecuer(std::string name);
	~Barbecuer();
	void bakeMutton();
	void bakeChickenWing();
	void bakeChickenLeg();

private:
	std::string m_name;
};

