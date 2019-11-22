#include "GamePlayer.h"
#include <iostream>

GamePlayer::GamePlayer(std::string name, int healthPoint, int attack, int defense) :
	m_name(name), m_healthPoint(healthPoint), m_attack(attack), m_defense(defense)
{
	std::cout << "Ctor " << m_name << std::endl;
}

GamePlayer::~GamePlayer()
{
	std::cout << "Dtor " << m_name << std::endl;
}

std::unique_ptr<GameMemento> GamePlayer::saveToGameMemento()
{
	std::string gameMementoName = m_name + "GameMemento";
	return std::make_unique<GameMemento>(gameMementoName, m_healthPoint, m_attack, m_defense);
}

void GamePlayer::restoreFromGameMemento(GameMemento* gameMemento)
{
	m_healthPoint = gameMemento->getHealthPoint();
	m_attack = gameMemento->getAttack();
	m_defense = gameMemento->getDefense();
}

void GamePlayer::displayCurrentState()
{
	std::cout << "Health Point: " << m_healthPoint <<
		", Attack: " << m_attack <<
		", Defense: " << m_defense << std::endl;
}

void GamePlayer::fight(int healthPointDelta, int attackDelta, int defenseDelta)
{
	m_healthPoint += healthPointDelta;
	m_attack += attackDelta;
	m_defense += defenseDelta;
}
