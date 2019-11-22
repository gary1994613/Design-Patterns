#include <iostream>
#include <memory>
#include "User.h"
#include "IAccessUser.h"
#include "ConcreteAccessUser.h"
#include "IDatabase.h"
#include "ConcreteDatabase.h"
#include "IAccessDepartment.h"
#include "ConcreteAccessDepartment.h"


int main()
{
	std::cout << "Test Abstract Factory !\n";

	std::unique_ptr<IDatabase> sqlServerDatabase = std::make_unique<SqlServerDatabase>();
	std::unique_ptr<IAccessUser> SqlServerAccessUser = std::move(sqlServerDatabase->createAccessUser());
	std::unique_ptr<IAccessDepartment> SqlServerAccessDepartment = std::move(sqlServerDatabase->createAccessDepartment());

	std::unique_ptr<IDatabase> oracleDatabase = std::make_unique<OracleDatabase>();
	std::unique_ptr<IAccessUser> oracleAccessUser = std::move(oracleDatabase->createAccessUser());
	std::unique_ptr<IAccessDepartment> oracleAccessDepartment = std::move(oracleDatabase->createAccessDepartment());

	std::cout << "\nCreate User\n";
	User amumu(0, "Amumu");
	User jax(1, "Jax");

	std::cout << "\nInsert User\n";
	SqlServerAccessUser->insert(amumu);
	oracleAccessUser->insert(amumu);

	std::cout << "\nCreate Department\n";
	Department rdDepartment(0, "RD");
	Department misDepartment(1, "MIS");
	Department hrDepartment(2, "HR");

	std::cout << "\nInsert Department\n";
	SqlServerAccessDepartment->insert(rdDepartment);
	SqlServerAccessDepartment->insert(misDepartment);
	oracleAccessDepartment->insert(hrDepartment);

	std::cout << std::endl;
}