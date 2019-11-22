#include <iostream>
#include <memory>
#include "IPerson.h"
#include "ConcretePerson.h"
#include "IPersonFactory.h"
#include "ConcretePersonFactory.h"


int main()
{
	std::cout << "Test Factory Method!\n";

	std::unique_ptr<IPersonFactory> undergraduateFactory = std::make_unique<UndergraduateFactory>();
	std::unique_ptr<IPersonFactory> volunteerFactory = std::make_unique<VolunteerFactory>();

	std::unique_ptr<IPerson> jayce = std::move(undergraduateFactory->createPerson("Jayce"));
	std::unique_ptr<IPerson> quinn = std::move(volunteerFactory->createPerson("Quinn"));

	std::cout << std::endl;
	jayce->doLaundry();
	quinn->goShopping();
	quinn->sweepFloor();

	std::cout << std::endl;
}