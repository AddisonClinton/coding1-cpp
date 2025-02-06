// Addison Clinton Coding 1 Spring 2025 Week 3
// Variables, logic, and radnomness

#include <iostream>  //sends text to and from the console
#include <string>   // allows us to send string variables
#include <cstdlib>
#include <ctime> 
using namespace std;   // so we dont have to type "std::" all the time

//this is where the program starts running
// its a function that returns an integer
int main() {
	srand(time(0));
	cout << "check out this random number: " << rand() << ".\n";
	cout << "check out this random number: " << rand() << ".\n";
	cout << "check out this random number: " << rand() << ".\n";
	cout << "check out this random number: " << rand() << ".\n";
	cout << "check out this random number: " << rand() << ".\n";
	cout << "check out this random number: " << rand() << ".\n";
	cout << "check out this random number: " << rand() << ".\n";

	// modulus gives remainder of long division
	cout << "7 divided by 2 = " << 7 / 2 << " with a remainder of " << 7 % 2 << ".\n";

	cout << "a random number between 1 and 10 (inclusive): " << (rand() % 10) + 1 << ".\n";

	cout << "here are this weeks numbers. (between 50 and 100).\n";
	int counter = 0;
	// while test is true, keep looping.
	// while (test) { code block }
	while (counter < 25) {
		counter += 1;
		cout << (rand() % 50) + 50 << "\n";
	}

	cout << "hello! whats your name?\n";
	string input;			//create a variable to hold players input
	cin >> input;			//assign input from console to input variable

	if (input == "Addison") {
		cout << "what is the password?\n";
		cin >> input;
		if (input == "Hamburger") {
			cout << "mm hamburger...\n";
		}
		else {
			cout << "nuh uh!!!!!!!!!!!!!\n";
			return 0;			//quits the program early
		}
	}
	else {
		cout << "helo " << input << ".\n";
	}

	cout << "are you ready\n";
	// a character is a single character
	char playerCharInput = 'n';
	string name = "addison";

	int totalTurns = 0;
	do {
		cout << "press 'y' to keep playing\n";
		cin >> playerCharInput;
		totalTurns += 1;
	} while (playerCharInput == 'y');

	cout << "you played for " << totalTurns << "  turns!\n";
	
	//all code inside a code block should be indented
	cout << "\twelcome to week 3!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	cout << "were talking about variables, logic, and randomness today.\n";

	//variables are nicknames for data.
	//creating a variable of the type integer
	//named "age"
	//with the declared value of 20.
	int age = 20;
	int score = 0;  //declaring but not defining the variable

	cout << "Always initialized your variables.\n";

	//lets talk about camelCase
	//captialize each new word after the first one
	int playerOneFuelAmount = 43;

	// an integer is a whole number, positive or negative, between -2bil and +2bil.
	int oceanDepth = -234;

	//floats are floating-point nnumbers. they have a decimal point!
	//accurate to 7-digits
	//creating a constant float named "pi" with the value of "3.1415".
	float pi = 3.1415f;

	//doubles are double-precision floating point numbers. accurate to 22-digits.
	double someNumberWithDecimals = 3756.388745654408;

	//task: send 4 numbers to the console
	cout << "Player 1's fuel is at " << playerOneFuelAmount << ".\n";
	cout << "The ocean is this deep: " << oceanDepth << ".\n";
	cout << "this might be pi -> " << pi << ".\n";
	cout << "check out this number, " << someNumberWithDecimals << ".\n";

	//when using random numbers, dont forget to
	// #include <cstdlib>    // for rand() and strand()
	//#include <stime>    // for time()


} //end of main