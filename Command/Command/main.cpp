#include <iostream>
#include "ICommand.h"
#include "ConcreteCommand.h"
#include "Waiter.h"
#include "Barbecuer.h"

int main()
{
	std::cout << "Test Command !\n";

	std::unique_ptr<Barbecuer> barbecuer = std::make_unique<Barbecuer>("Barbecuer");
	std::unique_ptr<ICommand> bakeMuttonCommand = std::make_unique<BakeMuttonCommand>(barbecuer.get());
	std::unique_ptr<ICommand> bakeChickenWingCommand = std::make_unique<BakeChickenWingCommand>(barbecuer.get());
	std::unique_ptr<ICommand> bakeChickenLegCommand = std::make_unique<BakeChickenLegCommand>(barbecuer.get());
	std::unique_ptr<Waiter> waiter = std::make_unique<Waiter>("Waiter");

	std::cout << "\nRound 1\n";
	waiter->setOrder(bakeMuttonCommand.get());
	waiter->setOrder(bakeChickenWingCommand.get());
	waiter->setOrder(bakeChickenWingCommand.get());

	waiter->notify();

	std::cout << "\nRound 2\n";
	waiter->clearOrder();
	waiter->setOrder(bakeMuttonCommand.get());
	waiter->setOrder(bakeChickenLegCommand.get());
	waiter->setOrder(bakeChickenWingCommand.get());
	waiter->cancelOrder(bakeChickenWingCommand.get());

	waiter->notify();

	waiter->clearOrder();
	waiter->notify();

	std::cout << std::endl;
}