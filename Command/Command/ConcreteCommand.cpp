#include "ConcreteCommand.h"
#include <iostream>

BakeMuttonCommand::BakeMuttonCommand(Barbecuer* receiver) :
	ICommand(receiver)
{
	std::cout << "Ctor BakeMuttonCommand" << std::endl;
}

BakeMuttonCommand::~BakeMuttonCommand()
{
	std::cout << "Dtor BakeMuttonCommand" << std::endl;
}

void BakeMuttonCommand::execute()
{
	m_receiver->bakeMutton();
}

BakeChickenWingCommand::BakeChickenWingCommand(Barbecuer* receiver) :
	ICommand(receiver)
{
	std::cout << "Ctor BakeChickenWingCommand" << std::endl;
}

BakeChickenWingCommand::~BakeChickenWingCommand()
{
	std::cout << "Dtor BakeChickenWingCommand" << std::endl;
}

void BakeChickenWingCommand::execute()
{
	m_receiver->bakeChickenWing();
}

BakeChickenLegCommand::BakeChickenLegCommand(Barbecuer* receiver) :
	ICommand(receiver)
{
	std::cout << "Ctor BakeChickenLegCommand" << std::endl;
}

BakeChickenLegCommand::~BakeChickenLegCommand()
{
	std::cout << "Dtor BakeChickenLegCommand" << std::endl;
}

void BakeChickenLegCommand::execute()
{
	m_receiver->bakeChickenLeg();
}