#pragma once
#include <string>
#include "IPlayer.h"

class ForeignCenter
{
public:
	explicit ForeignCenter(std::string name);
	~ForeignCenter();
	void attack();
	void protect();

private:
	std::string m_name;
};


