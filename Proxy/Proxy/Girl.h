#pragma once
#include <string>

class Girl
{
public:
	Girl(std::string name);
	~Girl();
	std::string getName();

private:
	std::string m_name;
};

