// FavoriteGames.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string favGames[10];
    string input;
    
    bool running = true;
    
    cout << "Welcome to the Top 10 Games Organizer!\n";

    while (running) {

        cout << "Type 'add' 'edit' 'remove' 'show' or 'quit'.\n";

        cin >> input;
        
        if (input == "add") {
            cout << "Type the name of the game you want to add.\n";
            cin >> input;
            for (int i = 0; i < 10; i++) {
                if (favGames[i] == "")
                {
                    favGames[i] = input;
                    cout << input << " has been added to the list!\n";
                    break;
                }
                if (i == 9) {
                    cout << "no room :(\n";
                }
            }
        }
        else if (input == "edit") {
            cout << "Which game would you like to change?\n";
            cin >> input;

            for (int i = 0; i < 10; i++) {
                if (input == favGames[i]) {
                    cout << "What would you like to change it to?\n";
                    cin >> input;
                    cout << "Game edited.\n";
                    favGames[i] = input;
                    break;
                }
                if (i == 9) {
                    cout << "That game is not real.\n";
                }

            }
        }
        else if (input == "remove") {

            cout << "Which game would you like to remove?\n";
            cin >> input;

            for (int i = 0; i < 10; i++) {
                if (input == favGames[i]) {
                    cout << "Game removed.\n";
                    favGames[i] = "";
                    break;
                }
                if (i == 9) {
                    cout << "That game is not real.\n";
                }
            }
        }
        else if (input == "show") {
            for (int i = 0; i < 10; i++) {
                if (favGames[i] == "") {
                    continue;
                }
                else {
                    cout << favGames[i] << ".\n";
                }
            }
        }
        else if (input == "quit") {
            cout << "Bye bye.\n";
            running = false;
        }
        else if (input != "add" || "show" || "remove" || "quit") {
            cout << "Invalid input.\n";
        }
    }
}

