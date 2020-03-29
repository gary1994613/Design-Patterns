#pragma once
#include <string>
#include "IManager.h"

class Boss : public IManager
{
public:
	Boss(std::string name);
	~Boss();
	void setSuperior(IManager* superior) override;
	void handleRequest(Request* request) override;

private:
	std::string m_name;
	IManager* m_superior;
};

