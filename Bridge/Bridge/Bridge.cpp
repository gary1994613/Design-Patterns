#include <iostream>
#include <memory>
#include "IMobileApp.h"
#include "IMobileBrand.h"
#include "ConcreteMobileApp.h"
#include "ConcreteMobileBrand.h"


int main()
{
    std::cout << "Test Bridge !\n";

    std::unique_ptr<IMobileBrand> mobileBrandA = std::make_unique<MobileBrandA>();
    std::unique_ptr<IMobileBrand> mobileBrandB = std::make_unique<MobileBrandB>();
    std::unique_ptr<IMobileApp> mobileAddressBook = std::make_unique<MobileAddressBook>();
    std::unique_ptr<IMobileApp> mobileGame = std::make_unique<MobileGame>();

    std::cout << std::endl;

    mobileBrandA->setMobileApp(mobileGame.get());
    mobileBrandA->run();

    mobileBrandA->setMobileApp(mobileAddressBook.get());
    mobileBrandA->run();

    mobileBrandB->setMobileApp(mobileGame.get());
    mobileBrandB->run();

    mobileBrandB->setMobileApp(mobileAddressBook.get());
    mobileBrandB->run();

    std::cout << std::endl;
}
