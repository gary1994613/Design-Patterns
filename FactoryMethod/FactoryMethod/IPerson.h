#pragma once
#include <string>

class IPerson
{
public:
	explicit IPerson(std::string name);
	virtual ~IPerson();
	virtual void sweepFloor();
	virtual void doLaundry();
	virtual void goShopping();

protected:
	std::string m_name;
};

