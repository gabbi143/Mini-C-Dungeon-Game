#include <iostream>
#include <cstdlib>
#include <ctime>
#include "dungeon-game.h"

using namespace std;

int main()
{
    int choice;
    string chestFound;
    string useItem;
    int playerHealth = 25;
    int playerMana = 25;
    int healthPotion = 0;
    int manaPotion = 0;

    gameIntro();

    while (true) {

        gameoptions();
        cout << endl << "Your choice: ";
        cin >> choice;
        cout << endl;

        switch(choice) {
            case 1:
                playerStats(playerHealth, playerMana);
                break;

            case 2:
                playerinventory(healthPotion, manaPotion);
                break;
            case 3:
                chestFound = openChestPrintFoundItems();
                if (chestFound == "Mana Potion") {
                    manaPotion++;
                } else if (chestFound == "Health Potion") {
                    healthPotion++;
                }
                break;
            case 4:
                cout << "----------------------------" << endl;
                cout << "Choose an item to use: " << endl;
                cout << "1. Health Potion" << endl;
                cout << "2. Mana Potion" << endl << endl;
                cout << "----------------------------" << endl;
                cout << "Your Choice: ";
                cin >> choice;

                if (choice == 1) {
                    if (healthPotion <= 0) {
                        cout << "----------------------------" << endl;
                        cout << "You have no Health Potion." << endl;
                        cout << "----------------------------" << endl;
                    } else {
                        healthPotion--;
                        playerHealth += 25;
                        cout << "----------------------------" << endl;
                        cout << "You used a Health Potion." << endl;
                        cout << "----------------------------" << endl;
                    }

                } else if (choice == 2) {
                    if (manaPotion <= 0) {
                        cout << "----------------------------" << endl;
                        cout << "You have no Mana Potion." << endl;
                        cout << "----------------------------" << endl;
                    } else {
                        manaPotion--;
                        playerMana += 25;
                        cout << "----------------------------" << endl;
                        cout << "You used a Mana Potion." << endl;
                        cout << "----------------------------" << endl;
                    }
                }

                break;
            case 5:
                cout << "Goodbye.";
                return 0;
            default:
                cout << "Invalid input. Please enter again." << endl << endl;
                break;
        }
    }
}
