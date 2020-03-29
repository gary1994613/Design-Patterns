#pragma once
#include <string>
#include "ISend.h"
#include "Girl.h"


class Suitor : public ISend
{
public:
	Suitor(std::string name, Girl* girl);
	~Suitor();
	void SendFlowers() override;
	void SendCard() override;
	void SendChocolate() override;

private:
	std::string m_name;
	Girl* m_girl;
};

