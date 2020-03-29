#pragma once
#include "Request.h"


class IManager
{
public: 
	virtual ~IManager() {};
	virtual void setSuperior(IManager *superior) = 0;
	virtual void handleRequest(Request *request) = 0;
};

