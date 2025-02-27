// Addison Clinton Coding1b Week5
// Loops and Lists

#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "welcome to week 5!!\n";

	string input;

	//arrays
	string colors[4];
	colors[0] = "Red";
	colors[1] = "Blue";
	colors[2] = "Green";
	colors[3] = "Yellow";

	cout << "The first color in our array of colors is " << colors[0] << ".\n";

	//lets loop through all of the colors.
	cout << "\nHere are all the colors check it out:\n";
	
	int iterator = 0;
	while (iterator < 4) {
		cout << colors[iterator] << "\n";
		iterator += 1;
	}

	// lets build a new list, using player input.
	
	cout << "Who are your best friends?\n";
	
	// keep using string input from earlier
	string bestfriends[10];		//size of 10. arrays must specift size in c++
	int currentElement = 0;		//this points at next available spot in the array
	do {
		cout << "enter a name, or type 'quit to quit. \n";
		getline(cin, input);		//using cin, get input and assign it to temp

		if (input == "quit") {
			break;
		}
		bestfriends[currentElement++] = input;		//after current element is used, add 1

	} while (input != "quit" && currentElement <= 10);

	//for(setup, test, action)
	for (int i = 0; i < 10; i++) {
		cout << bestfriends[i] << "\n";
	}

	return 0;

}