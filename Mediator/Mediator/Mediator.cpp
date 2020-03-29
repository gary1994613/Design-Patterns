#include <iostream>
#include <memory>
#include "IColleague.h"
#include "ConcreteColleague.h"
#include "INationMediator.h"
#include "ConcreteNationMediator.h"

int main()
{
    std::cout << "Test Mediator !\n";

    auto unitedStates = std::make_unique<UnitedStates>();
    auto japan = std::make_unique<Japan>();
    auto germany = std::make_unique<Germany>();

    auto unitedNations = std::make_unique<UnitedNations>();
    auto worldTradeOrganization = std::make_unique<WorldTradeOrganization>();


    std::cout << "\nTest with UnitedNations" << std::endl;
    unitedStates->setMediator(unitedNations.get());
    japan->setMediator(unitedNations.get());
    germany->setMediator(unitedNations.get());

    unitedNations->setColleagueUnitedStates(unitedStates.get());
    unitedNations->setColleagueJapan(japan.get());
    unitedNations->setColleagueGermany(germany.get());

    unitedStates->sendMessage("Hihi from UnitedStates");


    std::cout << "\nTest with WorldTradeOrganization" << std::endl;
    unitedStates->setMediator(worldTradeOrganization.get());
    japan->setMediator(worldTradeOrganization.get());
    germany->setMediator(worldTradeOrganization.get());

    worldTradeOrganization->setColleagueUnitedStates(unitedStates.get());
    worldTradeOrganization->setColleagueJapan(japan.get());
    worldTradeOrganization->setColleagueGermany(germany.get());

    japan->sendMessage("KoNiChiWa from Japan");
    std::cout << std::endl;
    germany->sendMessage("GutenTag from Germany");


    std::cout << std::endl;
}
