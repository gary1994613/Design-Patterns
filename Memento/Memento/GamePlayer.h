#pragma once
#include <string>
#include <memory>
#include "GameMemento.h"

class GamePlayer
{
public:
	explicit GamePlayer(std::string name, int healthPoint, int attack, int defense);
	~GamePlayer();
	std::unique_ptr<GameMemento> saveToGameMemento();
	void restoreFromGameMemento(GameMemento* gameMemento);
	void displayCurrentState();
	void fight(int healthPointDelta, int attackDelta, int defenseDelta);

private:
	std::string m_name;
	int m_healthPoint;
	int m_attack;
	int m_defense;
};

