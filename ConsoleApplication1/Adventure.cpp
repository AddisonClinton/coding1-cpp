#include <iostream>        // in out stream sends text to and from the console.
#include <string>        // allows us to use string variables.
#include <cstdlib> 
#include <ctime>
#include <windows.h>
using namespace std;    


int main() {
    cout << "Welcome to the game of the year, prepare thyself.\n";
    Sleep(1500);
    cout << "Have you prepared thyself?\n";
    string input1;
    cin >> input1;
    if (input1 == "yes") {
        cout << "The adventure begins...\n";
        Sleep(1500);
    }
    else {
        cout << "Then begone!!\n";
        Sleep(1500);
        return 0;
    }
    int health = 7, attack, block, turns = 0;
    srand(time(0));
    int lower_bound = 0, upper_bound = 4;


    while (true) {
        turns++;
        cout << "The creature appears...\n";
        Sleep(1500);
        int attack = ((rand() % 4) + 1);
        int block = ((rand() % 4) + 1);
        if (block >= attack) {
            cout << "The creature has been defeated!\n";
            Sleep(1500);
        }
        else {
            health = health - attack;
            cout << "The creature has struck you! (owie D:)\n";
            Sleep(1500);
            cout << "You have " << health << " health remaining.\n";
            Sleep(1500);
            if (health <= 3 && health > 0) {
                cout << "You might wanna get that checked out.\n";
                Sleep(1500);
            }
            if (health <= 0) {
                cout << "womp womp you are dead :(\n";
                Sleep(1500);
                break;
            }
        }

        if (health > 0 && turns < 4) {
            cout << "Keep playing?\n";
            Sleep(1500);
            string input2;
            cin >> input2;

            if (input2 == "yes") {
                cout << "The adventure continues...\n";
                Sleep(1500);
            }
            else {
                cout << "A pity...\n";
                Sleep(1500);
                break;      // this breaks us out of the loop early!
            }
        }
        else {
            cout << "You have survived the creatures and saved the world.\n";
            Sleep(1500);
            cout << "You are now one of the few victors of the game of the year.\n";
            Sleep(1500);
            cout << "you win :)\n";
            Sleep(1500);
            break;
        }
       
    }
    return 0;


}