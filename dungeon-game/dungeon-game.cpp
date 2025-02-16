#include <iostream>
#include <cstdlib>
#include <ctime>
#include "dungeon-game.h"

using namespace std;

void gameIntro() {
    cout << "----------------------------" << endl;
    cout << "  WELCOME TO DUNGEON GAME" << endl;
    cout << "----------------------------" << endl;
}
void gameoptions() {
    cout << "Choose an option:" << endl;
    cout << "1. Show player stats    " << endl;
    cout << "2. Show inventory" << endl;
    cout << "3. Show chest " << endl;
    cout << "4. Use an item" << endl;
    cout << "5. Quit Game" << endl;
    cout << "----------------------------" << endl;
}
void playerStats(int health, int mana) {
    cout << "----------------------------" << endl;
    cout << "      PLAYER STATS" << endl;
    cout << "----------------------------" << endl;
    cout << "Health: " << health << endl;
    cout << "Mana: " << mana << endl;
    cout << "----------------------------" << endl << endl;
}
void playerinventory(int healthPotion, int manaPotion) {
    cout << "----------------------------" << endl;
    cout << "      PLAYER INVENTORY" << endl;
    cout << "----------------------------" << endl;
    cout << "Health Potion: " << healthPotion << endl;
    cout << "Mana Potion: " << manaPotion << endl;
    cout << "----------------------------" << endl << endl;
}
string openChestPrintFoundItems() {
    srand(time(0));
    int randomNum = rand()%3+1;
    if (randomNum == 1) {
        cout << "----------------------------" << endl;
        cout << "You found a Health Potion ! ! ! " << endl;
        cout << "----------------------------" << endl << endl;
        return "Health Potion";
    } else if (randomNum == 2) {
        cout << "----------------------------" << endl;
        cout << "You found a Mana Potion ! ! ! " << endl ;
        cout << "----------------------------" << endl << endl;
        return "Mana Potion";
    } else {
        cout << "----------------------------" << endl;
        cout << "You found nothing."<< endl;
        cout << "----------------------------" << endl << endl;
        return "None.";
    }
}














