#pragma once
#include <string>
#include "IManager.h"

class Supervisor : public IManager
{
public:
	Supervisor(std::string name);
	~Supervisor();
	void setSuperior(IManager *superior) override;
	void handleRequest(Request* request) override;

private:
	std::string m_name;
	IManager *m_superior;
};

