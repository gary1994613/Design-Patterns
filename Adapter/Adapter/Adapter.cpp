#include <iostream>
#include <memory>
#include "IPlayer.h"
#include "ForwardPlayer.h"
#include "CenterPlayer.h"
#include "GuardPlayer.h"
#include "ForeignCenter.h"
#include "ForeignCenterToPlayerTranslator.h"

int main()
{
	std::cout << "Test Adapter !\n";

	std::unique_ptr<IPlayer> fiddlesticks = std::make_unique<ForwardPlayer>("Fiddlesticks");
	std::unique_ptr<IPlayer> elise = std::make_unique<CenterPlayer>("Elise");
	std::unique_ptr<IPlayer> evelynn = std::make_unique<GuardPlayer>("Evelynn");

	std::unique_ptr<ForeignCenter> zed = std::make_unique<ForeignCenter>("Zed");
	std::unique_ptr<IPlayer> zedTranslator = std::make_unique<ForeignCenterToPlayerTranslator>("ZedTranslator", zed.get());

	std::cout << "\nGame 1\n";

	fiddlesticks->offense();
	elise->offense();
	evelynn->defense();
	zedTranslator->offense();

	std::cout << "\nGame 2\n";

	fiddlesticks->defense();
	elise->offense();
	evelynn->offense();
	zedTranslator->defense();

	std::cout << std::endl;
}