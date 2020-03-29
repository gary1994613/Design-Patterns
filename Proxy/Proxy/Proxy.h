#pragma once
#include <string>
#include "ISend.h"
#include "Suitor.h"


class Proxy : public ISend
{
public:
	Proxy(std::string name, Suitor *suitor);
	~Proxy();
	void SendFlowers() override;
	void SendCard() override;
	void SendChocolate() override;

private:
	std::string m_name;
	Suitor *m_suitor;
};

