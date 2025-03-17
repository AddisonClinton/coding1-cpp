// Addison Clinton Coding 1b Spring 2025
// recap day!

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

//this is where the program starts
int main() {
	srand(time(NULL));
	bool debug = false;

	cout << "welcome to thursday!!\n";
	cout << "whats your name?\n";
	string input;
	getline(cin, input);

	if (false) {
		if (input == "Addison" || input == "addison" || input == "school") {
			cout << "helo creator\n";
			debug = true;
			if (debug) cout << "Debug mode activated.\n";
		}
		else {
			cout << "Hello " << input << ".\n";
		}

		int theNumber = rand() % 10 + 1;
		if (debug) cout << "dont tell anybody but the number is actually " << theNumber << ".\n";
		int guess = 0;

		cout << "Im thinking of a crazy number rn. its between 1 and 10.\nI bet you cant guess it.\n";

		while (guess != theNumber) {
			cout << "What is your guess?\n>>";
			getline(cin, input);
			guess = stoi(input);

			if (guess == theNumber) {
				cout << "Thats it!!!!!!!!\n";
				break;
			}
			if (guess > theNumber) {
				cout << "Nuh uh!!!!!!!!!!! too high!\n";
			}
			else {
				cout << "Nuh uh!!!!!!!!!!!! too low!\n";
			}
		}

	}

	if (true) {
		vector<string> favBooks = { "Captain Underpants", "Berserk", "Minecraft Redstone Handbook" };

		cout << "The first book in my list of books is " << favBooks[0] << ".\n";

		cout << "Please add another book to the list.\n";
		getline(cin, input);

		favBooks.push_back(input);

		cout << "There are now " << favBooks.size() << " books in the list.\n";
		cout << "The last book in the list is " << favBooks[favBooks.size() - 1] << ".\n";

		cout << "Peep the unsorted list:\n";
		for (int i = 0; i < favBooks.size(); i++) {
			cout << favBooks[i] << "\n";
		}
		
		cout << "Im gonna sort the list ok.\n";
		sort(favBooks.begin(), favBooks.end());

		cout << "Peep the sorted list:\n";
		for (int i = 0; i < favBooks.size(); i++) {
			cout << favBooks[i] << "\n";
		}

		cout << "im shuffling the list all randomly.\n";
		random_shuffle(favBooks.begin(), favBooks.end());

		cout << "Peep the random:\n";
		for (int i = 0; i < favBooks.size(); i++) {
			cout << favBooks[i] << "\n";
		}

		cout << "Gimme a book from the list and ill tell you what position its in.\n";
		getline(cin, input);
		vector<string> ::iterator iter;
		iter = find(favBooks.begin(), favBooks.end(), input);

		if (iter != favBooks.end()) {
			cout << *iter << ".\n";
		}
		else {
			cout << "that book isnt real.\n";
		}
	}

	
}
