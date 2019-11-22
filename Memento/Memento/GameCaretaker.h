#pragma once
#include <memory>
#include <string>
#include "GameMemento.h"

class GameCaretaker
{
public:
	explicit GameCaretaker(std::string name);
	~GameCaretaker();
	void setGameMemento(std::unique_ptr<GameMemento> gameMemento);
	GameMemento* getGameMemento();

private:
	std::string m_name;
	std::unique_ptr<GameMemento> m_gameMemento;
};

