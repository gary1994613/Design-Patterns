#include <iostream>
#include <memory>
#include "Girl.h"
#include "Proxy.h"
#include "Suitor.h"

int main()
{
	std::cout << "Test Proxy !\n";

	std::unique_ptr<Girl> caitlyn = std::make_unique<Girl>("Caitlyn");
	std::unique_ptr<Suitor> darius = std::make_unique<Suitor>("Darius", caitlyn.get());
	std::unique_ptr<Proxy> proxy = std::make_unique<Proxy>("Lucian", darius.get());

	std::cout << std::endl;

	proxy->SendFlowers();
	proxy->SendCard();
	proxy->SendChocolate();

	std::cout << std::endl;
}
