#pragma once
#include <string>
#include "Person.h"
#include "IPersonBuilder.h"

class PersonDirector
{
public:
	explicit PersonDirector(IPersonBuilder* personBuilder);
	~PersonDirector();
	void setPersonBuilder(IPersonBuilder* personBuilder);
	std::unique_ptr<Person> buildPerson(const std::string personName);

private:
	IPersonBuilder* m_personBuilder;
};