#include "Request.h"
#include <iostream>


Request::Request()
{
	std::cout << "Ctor Request" << std::endl;
}

Request::~Request()
{
	std::cout << "Dtor Request" << std::endl;
}

void Request::setRequestType(int requestType)
{
	m_requestType = requestType;
}

int Request::getRequestType()
{
	return m_requestType;
}

void Request::setRequestContent(std::string requestContent)
{
	m_requestContent = requestContent;
}

std::string Request::getRequestContent()
{
	return m_requestContent;
}

void Request::setRequestNumber(int requestNumber)
{
	m_requestNumber = requestNumber;
}

int Request::getRequestNumber()
{
	return m_requestNumber;
}