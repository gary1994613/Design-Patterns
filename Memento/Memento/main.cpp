#include <iostream>
#include <memory>
#include "GamePlayer.h"
#include "GameMemento.h"
#include "GameCaretaker.h"

int main()
{
	std::cout << "Test Memento !\n";
	std::unique_ptr<GamePlayer> nautilus = std::make_unique<GamePlayer>("Nautilus", 100, 30, 20);
	std::unique_ptr<GameCaretaker> nautilusCareTaker = std::make_unique<GameCaretaker>("NautilusGameCaretaker");
	nautilusCareTaker->setGameMemento(nautilus->saveToGameMemento());

	std::cout << "\nOriginal State\n";
	nautilus->displayCurrentState();

	std::cout << "\nFighting...\n";
	nautilus->fight(-70, -10, -5);
	nautilus->displayCurrentState();
	nautilus->fight(+30, -20, 0);
	nautilus->displayCurrentState();
	nautilus->fight(-20, +5, +10);
	nautilus->displayCurrentState();

	std::cout << "\nRestore\n";
	nautilus->restoreFromGameMemento(nautilusCareTaker->getGameMemento());
	nautilus->displayCurrentState();

	std::cout << std::endl;
}
