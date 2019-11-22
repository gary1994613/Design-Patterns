#pragma once
#include "IPlayer.h"
#include "ForeignCenter.h"

class ForeignCenterToPlayerTranslator : public IPlayer
{
public:
	explicit ForeignCenterToPlayerTranslator(std::string name, ForeignCenter* foreignCenter);
	~ForeignCenterToPlayerTranslator();
	void offense() override;
	void defense() override;

private:
	std::string m_name;
	ForeignCenter* m_foreignCenter;
};

