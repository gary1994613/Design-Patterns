#pragma once
#include <string>

class Request
{
public:
	Request();
	~Request();
	void setRequestType(int requestType);
	int getRequestType();
	void setRequestContent(std::string requestContent);
	std::string getRequestContent();
	void setRequestNumber(int requestNumber);
	int getRequestNumber();

private:
	int m_requestType;
	std::string m_requestContent;
	int m_requestNumber;
};

