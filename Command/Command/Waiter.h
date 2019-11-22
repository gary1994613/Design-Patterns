#pragma once
#include <string>
#include <list>
#include "ICommand.h"

class Waiter
{
public:
	explicit Waiter(std::string name);
	~Waiter();
	void setOrder(ICommand* command);
	void cancelOrder(ICommand* command);
	void clearOrder();
	void notify();

private:
	std::list<ICommand*> m_commandList;
	std::string m_name;
};

