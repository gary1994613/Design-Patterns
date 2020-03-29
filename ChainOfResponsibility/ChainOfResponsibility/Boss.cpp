#include "Boss.h"
#include <iostream>

Boss::Boss(std::string name) :
	m_name(name),
	m_superior(nullptr)
{
	std::cout << "Ctor Supervisor" << std::endl;
}

Boss::~Boss()
{
	std::cout << "Dtor Supervisor" << std::endl;
}

void Boss::setSuperior(IManager* superior)
{
	m_superior = superior;
}

void Boss::handleRequest(Request* request)
{
	if (request->getRequestType() == 0 && request->getRequestNumber() < 7)
	{
		std::cout << m_name << " accepts request " << request->getRequestContent() << " with number " << request->getRequestNumber() << std::endl;
	}
	else if (request->getRequestType() == 1 && request->getRequestNumber() < 500)
	{
		std::cout << m_name << " accepts request " << request->getRequestContent() << " with number " << request->getRequestNumber() << std::endl;
	}
	else
	{
		std::cout << m_name << " rejects request " << request->getRequestContent() << " with number " << request->getRequestNumber() << std::endl;
	}
}