// Builder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
#include "IPersonBuilder.h"
#include "ConcretePersonBuilder.h"
#include "PersonDirector.h"

int main()
{
	std::cout << "Test Builder !\n";
	std::unique_ptr<IPersonBuilder> thinPersonBuilder = std::make_unique<ThinPersonBuilder>("Thin Person Builder");
	std::unique_ptr<IPersonBuilder> fatPersonBuilder = std::make_unique<FatPersonBuilder>("Fat Person Builder");
	std::unique_ptr<PersonDirector> personDirector = std::make_unique<PersonDirector>(thinPersonBuilder.get());

	std::unique_ptr<Person> katarina = std::move(personDirector->buildPerson("Katarina"));

	personDirector->setPersonBuilder(fatPersonBuilder.get());
	std::unique_ptr<Person> blitzcrank = std::move(personDirector->buildPerson("Blitzcrank"));

	std::cout << "\nShow person details\n";
	katarina->show();
	blitzcrank->show();

	std::cout << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
