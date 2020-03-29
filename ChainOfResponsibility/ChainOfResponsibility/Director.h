#pragma once
#include <string>
#include "IManager.h"

class Director : public IManager
{
public:
	Director(std::string name);
	~Director();
	void setSuperior(IManager* superior) override;
	void handleRequest(Request* request) override;

private:
	std::string m_name;
	IManager* m_superior;
};

