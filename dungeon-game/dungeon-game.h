#ifndef DUNGEON-GAME_H_INCLUDED
#define DUNGEON-GAME_H_INCLUDED

using namespace std;

void gameIntro();
void gameoptions();
void playerStats(int health, int mana);
void playerinventory(int healthPotion, int manaPotion);
string openChestPrintFoundItems();
string chooseItem();

#endif // DUNGEON-GAME_H_INCLUDED
