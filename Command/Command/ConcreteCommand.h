#pragma once
#include "ICommand.h"

class BakeMuttonCommand : public ICommand
{
public:
	explicit BakeMuttonCommand(Barbecuer* receiver);
	~BakeMuttonCommand();
	void execute() override;
};

class BakeChickenWingCommand : public ICommand
{
public:
	explicit BakeChickenWingCommand(Barbecuer* receiver);
	~BakeChickenWingCommand();
	void execute() override;
};

class BakeChickenLegCommand : public ICommand
{
public:
	explicit BakeChickenLegCommand(Barbecuer* receiver);
	~BakeChickenLegCommand();
	void execute() override;
};