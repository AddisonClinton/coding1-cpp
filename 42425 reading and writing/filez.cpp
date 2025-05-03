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

void WriteShipToFile(ship givenShip) {
	cout << "Writing " << givenShip.name << " to file\n.";

	ofstream file("ship.txt", ios::app);

	// confirm the file is open
	if (!file.is_open()) {
		cout << "dont wanna.\n";
		return;
	}

	// write text to the open file
	file << "Indeed, it is called " << givenShip.name << "...\n"; //add the name, which is a string, to the file.
	file << "It has " << givenShip.fuel << " fuel.\n"; //add the fuel, which an int, to the file.
	file << "The ship is a ";
	switch (givenShip.type) {
	case FIGHTER: file << "fighter.\n";
		break;
	case FRIGATE: file << "frigate.\n";
		break;
	case FREIGHTER: file << "freighter.\n";
		break;
	case CRUISER: file << "cruiser.\n";
		break;
	}

	//close the file (save to disk)
	file.close();
}

