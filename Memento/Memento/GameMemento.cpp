#include "GameMemento.h"
#include <iostream>

GameMemento::GameMemento(std::string name, int healthPoint, int attack, int defense) :
	m_name(name), m_healthPoint(healthPoint), m_attack(attack), m_defense(defense)
{
	std::cout << "Ctor " << m_name << std::endl;
}

GameMemento::~GameMemento()
{
	std::cout << "Dtor " << m_name << std::endl;
}

int GameMemento::getHealthPoint()
{
	return m_healthPoint;
}

int GameMemento::getAttack()
{
	return m_attack;
}

int GameMemento::getDefense()
{
	return m_defense;
}