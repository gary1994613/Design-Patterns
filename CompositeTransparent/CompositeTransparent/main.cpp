#include <iostream>
#include <memory>
#include "IOrganization.h"
#include "Company.h"
#include "HRDepartment.h"
#include "FinanceDepartment.h"


int main()
{
	std::cout << "Test Composite Transparent !\n";

	std::unique_ptr<IOrganization> headquarters = std::make_unique<Company>("Headquarters");
	std::unique_ptr<IOrganization> headquartersHRDepartment = std::make_unique<HRDepartment>("Headquarters HR department");
	std::unique_ptr<IOrganization> headquartersFinanceDepartment = std::make_unique<FinanceDepartment>("Headquarters finance department");
	headquarters->add(headquartersHRDepartment.get());
	headquarters->add(headquartersFinanceDepartment.get());

	std::unique_ptr<IOrganization> asiaBranch = std::make_unique<Company>("Asia branch");
	std::unique_ptr<IOrganization> asiaBranchHRDepartment = std::make_unique<HRDepartment>("Asia branch HR department");
	std::unique_ptr<IOrganization> asiaBranchFinanceDepartment = std::make_unique<FinanceDepartment>("Asia branch finance department");
	asiaBranch->add(asiaBranchHRDepartment.get());
	asiaBranch->add(asiaBranchHRDepartment.get());
	headquarters->add(asiaBranch.get());

	std::unique_ptr<IOrganization> taipeiOffice = std::make_unique<Company>("Taipei office");
	std::unique_ptr<IOrganization> taipeiOfficeHRDepartment = std::make_unique<HRDepartment>("Taipei office HR department");
	std::unique_ptr<IOrganization> taipeiOfficeFinanceDepartment = std::make_unique<FinanceDepartment>("Taipei office finance department");
	taipeiOffice->add(taipeiOfficeHRDepartment.get());
	taipeiOffice->add(taipeiOfficeFinanceDepartment.get());
	asiaBranch->add(taipeiOffice.get());

	std::unique_ptr<IOrganization> taichungOffice = std::make_unique<Company>("Taichung office");
	std::unique_ptr<IOrganization> taichungOfficeHRDepartment = std::make_unique<HRDepartment>("Taichung office HR department");
	std::unique_ptr<IOrganization> taichungOfficeFinanceDepartment = std::make_unique<FinanceDepartment>("Taichung office finance department");
	taichungOffice->add(taichungOfficeHRDepartment.get());
	taichungOffice->add(taichungOfficeFinanceDepartment.get());
	asiaBranch->add(taichungOffice.get());

	std::cout << "\nStructures!\n";
	headquarters->display(1);

	std::cout << "\nDuties!\n";
	headquarters->getDuty();

	std::cout << std::endl;
}