#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int Health;
int totalTreasure = 0;

int Roll(int sides) {
	return rand() % (sides + 1);
}

void Adventure() {
	Health = Roll(10);
	int playerDef = Roll(6);
	int enemyAtk = Roll(6);
	if (enemyAtk > playerDef) {
		Health -= enemyAtk;
		cout << "you got hit!!!!!\n";
	}
	else {
		cout << "you have obtained treasure!\n";
		totalTreasure += Roll(10);
	}
}

void Ending() {
	cout << "you stubbed your toe and died instantly\n";
	cout << "you left $" << totalTreasure << " USD by your body\n";
}

void Ask(string question) {
	cout << question;
	string input;
	cin >> input;
	if (input == "y") {
		Adventure();
	}
	else {
		cout << "ok bye bye\n";
		Health = 0;
	}
}

void Story() {
	cout << "adventure 2!!!!!!!!!!!!!\n";
	Ask("would you like to adventure\n");
}

int main() {
	Story();
	while (Health > 0){
		Ask("Would you like to continue adventuring?\n");
	}
	Ending();
	return 0;
}