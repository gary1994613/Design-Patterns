#include <iostream>
#include <memory>
#include "ISubject.h"
#include "BossSubject.h"
#include "SecretarySubject.h"
#include "IObserver.h"
#include "StockObserver.h"
#include "NBAObserver.h"

int main()
{
	std::cout << "Test Observer !\n";
	std::unique_ptr<ISubject> boss = std::make_unique<BossSubject>("Boss");
	std::unique_ptr<ISubject> secretary = std::make_unique<SecretarySubject>("Secretary");
	std::unique_ptr<IObserver> ashe = std::make_unique<StockObserver>("Ashe");
	std::unique_ptr<IObserver> vayne = std::make_unique<StockObserver>("Vayne");
	std::unique_ptr<IObserver> kaisa = std::make_unique<StockObserver>("Kaisa");
	std::unique_ptr<IObserver> vladimir = std::make_unique<NBAObserver>("Vladimir");
	std::unique_ptr<IObserver> ezreal = std::make_unique<NBAObserver>("Ezreal");
	std::unique_ptr<IObserver> tristana = std::make_unique<NBAObserver>("Tristana");

	std::cout << "\nTest from Boss !\n";
	boss->attach(ashe.get());
	boss->attach(vayne.get());
	boss->attach(kaisa.get());

	boss->notify();

	boss->detach(kaisa.get());
	boss->attach(vladimir.get());

	boss->notify();

	std::cout << "\nTest from Secretary !\n";
	secretary->attach(ashe.get());
	secretary->attach(vayne.get());
	secretary->attach(ezreal.get());

	secretary->notify();

	secretary->detach(ashe.get());

	secretary->notify();

	std::cout << std::endl;
}
