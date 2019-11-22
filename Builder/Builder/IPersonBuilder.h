#pragma once
#include <memory>
#include "Person.h"

class IPersonBuilder
{
public:
	virtual ~IPersonBuilder() {};
	virtual void buildName(const std::string personName) = 0;
	virtual void buildHead() = 0;
	virtual void buildBody() = 0;
	virtual void buildLeftArm() = 0;
	virtual void buildrRightArm() = 0;
	virtual void buildLeftLeg() = 0;
	virtual void buildRightLeg() = 0;
	virtual std::unique_ptr<Person> getPerson() = 0;
};