#pragma once
#include "Barbecuer.h"

class ICommand
{
public:
	explicit ICommand(Barbecuer* receiver) : m_receiver(receiver) {};
	virtual ~ICommand() {};
	virtual void execute() = 0;

protected:
	Barbecuer* m_receiver;
};

