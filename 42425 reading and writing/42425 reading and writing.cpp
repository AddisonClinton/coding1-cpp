#include "filez.h"
#include "ship.h"

int main()
{
	cout << "hi:3\n";

	ReadFromFile();

	WriteToFile("i fucking hate nintendo soooo bad\n");

	ship carolla;
	carolla.type = CRUISER;
	carolla.status();

	WriteShipToFile(carolla);

	return 0;
}

/*
	Files well use today
	1. 42425 reading and writing.cpp
	2. filez.h
	3. filez.cpp
	4. ship.h
	5. ship.cpp

	the header file just has the #includes and the function declarations.
	the source file (.cpp) will have the function definitions.


*/