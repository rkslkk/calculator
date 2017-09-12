#include <iostream>
#include <string>
// #include <ncurses.h>
using namespace std;

int main() {

    char mainMenu = 'z';
    float add1, add2 = 0;
    float sum = (add1 + add2);

    cout << "CALCULATOR PRACTICE PROGRAM" << endl << endl;
    cout << "Hello, and welcome to the Claculator Practice Program." << endl << endl;
    cout << "This program allows you to practice your math skills." << endl << endl;
    cout << "\t\t MAIN MENU" << endl << endl;

    cout << "a. \t \t Addition \t \t (X + Y)" << endl;
    cout << "b. \t \t Subtraction \t \t (X - Y)" << endl;
    cout << "c. \t \t Multiplication \t \t (X * Y)" << endl;
    cout << "d. \t \t Division \t \t \t (X / Y)" << endl;
    cout << "e. \t \t Powers & Roots " << endl;
    cout << "q. \t \t Quit the program " << endl;
    cin >> mainMenu;
    

    if (mainMenu == 'a' || mainMenu == 'A') {
        cout << "\n You have chosen Addition." << endl << endl;
        cout << "Please input two numbers to add together: " << endl;
        cin >> add1;
        cin >> add2;
        cout << "The sum is: " << sum << endl;
    };
    if (mainMenu == 'b' || mainMenu == 'B') {
        cout << "\n You have chosen Subtraction." << endl << endl;
    }
    if (mainMenu == 'c' || mainMenu == 'C') {
        cout << "\n You have chosen Multiplication." << endl << endl;
    }
    if (mainMenu == 'd' || mainMenu == 'D') {
        cout << "\n You have chosen division." << endl << endl;
    }
    if (mainMenu == 'e' || mainMenu == 'E') {
        cout << "\n You have chosen Powers & Roots." << endl << endl;
    }
    if (mainMenu == 'q' || mainMenu == 'Q') {
        cout << "\n You have chosen to quit the program. Goodbye." << endl;
        exit(0);
    }
    return 0;
}