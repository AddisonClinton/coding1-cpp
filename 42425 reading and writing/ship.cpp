#include "ship.h"
#include <iostream>

//define the constructor
ship::ship() {
	name = "Toyota Corolla";
	fuel = 50; 
	type = FRIGATE;
}

void ship::status() {
	cout << "the good ship " << name << " has " << fuel << ".\n";
	cout << "the ships type is ";
	switch (type) {
	case FIGHTER: cout << "fighter.\n";
		break;
	case FRIGATE: cout << "frigate.\n";
		break;
	case FREIGHTER: cout << "freighter.\n";
		break;
	case CRUISER: cout << "cruiser.\n";
		break;
	}
}