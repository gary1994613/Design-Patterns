#pragma once
#include <string>

class GameMemento
{
public:
	explicit GameMemento(std::string name, int healthPoint, int attack, int defense);
	~GameMemento();
	int getHealthPoint();
	int getAttack();
	int getDefense();

private:
	std::string m_name;
	int m_healthPoint;
	int m_attack;
	int m_defense;
};
