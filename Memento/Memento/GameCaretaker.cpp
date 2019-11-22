#include "GameCaretaker.h"
#include <iostream>

GameCaretaker::GameCaretaker(std::string name) :
	m_name(name), m_gameMemento(nullptr)
{
	std::cout << "Ctor " << m_name << std::endl;
}

GameCaretaker::~GameCaretaker()
{
	std::cout << "Dtor " << m_name << std::endl;
}

void GameCaretaker::setGameMemento(std::unique_ptr<GameMemento> gameMemento)
{
	m_gameMemento = std::move(gameMemento);
}

GameMemento* GameCaretaker::getGameMemento()
{
	return m_gameMemento.get();
}