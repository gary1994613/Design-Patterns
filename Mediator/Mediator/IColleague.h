#pragma once
#include <string>


class IColleague
{
public:
	virtual ~IColleague() {};
	virtual void sendMessage(std::string message) = 0;
	virtual void notifiedMessage(std::string message) = 0;
};

