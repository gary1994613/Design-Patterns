#include <iostream>
#include "Fund.h"


int main()
{
	std::cout << "Test Facade !\n";

	Fund fund;

	std::cout << "\n";

	fund.buy();
	fund.sell();
	
	std::cout << "\n";
}
