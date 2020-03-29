#include <iostream>
#include "IManager.h"
#include "Supervisor.h"
#include "Director.h"
#include "Boss.h"
#include "Request.h"


int main()
{
	std::cout << "Test Chain Of Responsibility !\n";
	std::unique_ptr<IManager> supervisor = std::make_unique<Supervisor>("Superior");
	std::unique_ptr<IManager> director = std::make_unique<Director>("Director");
	std::unique_ptr<IManager> boss = std::make_unique<Boss>("Boss");

	supervisor->setSuperior(director.get());
	director->setSuperior(boss.get());

	std::cout << std::endl;

	std::unique_ptr<Request> request1 = std::make_unique<Request>();
	request1->setRequestType(0);
	request1->setRequestContent("Alistar asks for personal leave");
	request1->setRequestNumber(2);
	supervisor->handleRequest(request1.get());

	std::unique_ptr<Request> request2 = std::make_unique<Request>();
	request2->setRequestType(0);
	request2->setRequestContent("Akali asks for personal leave");
	request2->setRequestNumber(4);
	supervisor->handleRequest(request2.get());

	std::unique_ptr<Request> request3 = std::make_unique<Request>();
	request3->setRequestType(1);
	request3->setRequestContent("Xayah asks for adjustment to the salary");
	request3->setRequestNumber(400);
	supervisor->handleRequest(request3.get());

	std::unique_ptr<Request> request4 = std::make_unique<Request>();
	request4->setRequestType(1);
	request4->setRequestContent("Sion asks for adjustment to the salary");
	request4->setRequestNumber(1000);
	supervisor->handleRequest(request4.get());

	std::cout << std::endl;
}