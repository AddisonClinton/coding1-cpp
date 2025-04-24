#include "filez.h"

void WriteToFile(string givenString) {
	// open the file
	ofstream file("file.txt", ios::app);

	// confirm the file is open
	if (!file.is_open()) {
		cout << "dont wanna.\n";
		return;
	}

	// write text to the open file
	file << givenString;

	//close the file (save to disk)
	file.close();

}

void ReadFromFile() {
	string fileContents;	// this is where we store the text in the file
	//open the file
	ifstream file("file.txt");

	//check that its actually open
	if (!file.is_open()) {
		cout << "dont wanna.\n";
	}

	//cout everything in there
	while (getline(file, fileContents)) {
		cout << fileContents << "\n";
	}

	//close the file
	file.close();
}