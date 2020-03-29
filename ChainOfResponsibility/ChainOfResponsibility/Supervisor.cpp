#include "Supervisor.h"
#include <iostream>

Supervisor::Supervisor(std::string name) :
	m_name(name),
	m_superior(nullptr)
{
	std::cout << "Ctor Supervisor" << std::endl;
}

Supervisor::~Supervisor()
{
	std::cout << "Dtor Supervisor" << std::endl;
}

void Supervisor::setSuperior(IManager *superior)
{
	m_superior = superior;
}

void Supervisor::handleRequest(Request* request)
{
	if (request->getRequestType() == 0 && request->getRequestNumber() < 2)
	{
		std::cout << m_name << " accepts request " << request->getRequestContent() << " with number " << request->getRequestNumber() << std::endl;
	}
	else if (m_superior != nullptr)
	{
		m_superior->handleRequest(request);
	}
}