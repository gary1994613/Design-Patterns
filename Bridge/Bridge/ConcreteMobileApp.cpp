#include "ConcreteMobileApp.h"
#include <iostream>

MobileGame::MobileGame()
{
	std::cout << "Ctor MobileGame" << std::endl;
}

MobileGame::~MobileGame()
{
	std::cout << "Dtor MobileGame" << std::endl;
}

void MobileGame::run()
{
	std::cout << "run MobileGame" << std::endl;
}


MobileAddressBook::MobileAddressBook()
{
	std::cout << "Ctor MobileAddressBook" << std::endl;
}

MobileAddressBook::~MobileAddressBook()
{
	std::cout << "Dtor MobileAddressBook" << std::endl;
}
	
void MobileAddressBook::run()
{
	std::cout << "run MobileAddressBook" << std::endl;
}