#include "IPersonBuilder.h"
#include <string>

class ThinPersonBuilder : public IPersonBuilder
{
public:
	explicit ThinPersonBuilder(const std::string builderName);
	~ThinPersonBuilder();
	void buildName(const std::string personName) override;
	void buildHead() override;
	void buildBody() override;
	void buildLeftArm() override;
	void buildrRightArm() override;
	void buildLeftLeg() override;
	void buildRightLeg() override;
	std::unique_ptr<Person> getPerson() override;

private:
	std::string m_builderName;
	std::unique_ptr<Person> m_person;
};


class FatPersonBuilder : public IPersonBuilder
{
public:
	explicit FatPersonBuilder(const std::string builderName);
	~FatPersonBuilder();
	void buildName(const std::string personName) override;
	void buildHead() override;
	void buildBody() override;
	void buildLeftArm() override;
	void buildrRightArm() override;
	void buildLeftLeg() override;
	void buildRightLeg() override;
	std::unique_ptr<Person> getPerson() override;

private:
	std::string m_builderName;
	std::unique_ptr<Person> m_person;
};