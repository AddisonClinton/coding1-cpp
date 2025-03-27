#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// global variables are dangerous
// global variables exist in all functions in this source file
bool debug = true;

int randmomNumberInRange(int min = 0, int max = 10) {
    if (min >= max) {
        cout << "what are these fuckass numbers.\n";
            return -1;
    }
    
    //calculate range
    int range = (max - min) + 1;
    //return random number
    return rand() % range + min;
}

bool randomBool() {
    int number = rand() % 10;
        if (number > 4)
            return true;
        else
            return false;
}

/*
void sayHello(string greeting = "helo") {
        cout << greeting << "\n";
    }
void sayBye(string farewell = "bye") {
    cout << farewell << "\n";
}

int triple(int givenNumber) {
    if (debug) cout << "givenNumber: " << givenNumber << ".\n";

    return givenNumber * 3;
}

double triple(double givenNumber) {
    if (debug) cout << "[givenNumber: " << givenNumber << ".]\n";
}


string getPlayerName(int minSize = 5, int maxSize = 15) {
    string input;

    do {
        cout << "what is your name?\n";
        getline(cin, input);

        //data vlaidation
        if (input.size() < minSize) {
            cout << "your name needs to be at least " << minSize <<" characters.\n";
        }
        else if (input.size() > maxSize) {
            cout << "your name is too damn long.\n";
        }
        else {
            string greeting = "hello " + input + "!";
            sayHello(greeting);
            return input;
        }
    } while (true);
}

*/

int main()
{
    if (randomBool()) {
        cout << "you win:)\n";
    }

    string input;
    cout << "Min = what?: ";
    getline(cin, input);
    int min = stoi(input);

    cout << "Max = what?: ";
    getline(cin, input);
    int max = stoi(input);

    cout << "A random number between " << min << " and " << max;
    cout << " is " << randmomNumberInRange(min, max) << ".\n";
    
    /*
    sayHello();
    sayHello("welcome to burger king");
    sayBye("whopper");

    string playerName = getPlayerName();


    cout << "triple of 4 is " << triple(5) << ".\n";
    cout << "triple of 1 is " << triple(1) << ".\n";
    cout << "triple of 30 is " << triple(30) << ".\n";


    cout << "what is your favorite foods?\n";
    string input;

    string favFoods[11];
    
    for (int i = 0; i < 3; i++) {
        cout << "fav food #" << i + 1;
        getline(cin, input);

        favFoods[i] = input;
    }

    cout << "here are your favorite foods:\n";
    for (int i = 0; i < 3; i++) {
        cout << favFoods[i] << ".\n";
    }
    */
}

