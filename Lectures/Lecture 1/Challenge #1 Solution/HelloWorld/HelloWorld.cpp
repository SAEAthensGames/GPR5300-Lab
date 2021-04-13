// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//A solution for the lightsaber problem

#include <iostream>
#include <list>
#include <iterator>
using namespace std;

//Global variables
string Welcome;

//Function Identifiers
void JediSelector(int);

int main()
{
    //Local
    string WelcomeMessage = "May the force be with you";
    string AskingAnswer = "What is your name, young padawan?";
    string name;
    string Option1 = "1. Prefer negotiation and meditation, strong force abilities";
    string Option2 = "2. Always angry and wants to destroy Everything";
    string Option3 = "3. Jedi Guardians fighting for the light side and are skillfull swordsmen";
    string Option4 = "4. Using Light and Dark side force, doing everything in order to keep the balance";
    string Answer2 = "Choose one of the following options";
    int Choice;
    int Choice2;

    // Hero hero1 = new Hero()

    //Print the welcome message
    cout << WelcomeMessage << endl;
    cout << AskingAnswer << endl;

    //Read the name
    cin >> name;


    //Print the name
    cout << name << endl;

    cout << Answer2 << endl << Option1 << endl << Option2 << endl << Option3 << endl << Option4 << endl;
    
    //Read the choice from the console
    cin >> Choice;

    //cout << endl << Choice << endl;

    //Run the function
    JediSelector(Choice);

    //Exit the programm
    return 0;
}

// A function
void JediSelector(int Choice) {

    //Based on choice value type the correct message
    if (Choice == 1) {
        cout << "Green";
    }
    else if (Choice == 2) {
        cout << "Red";
    }
    else if (Choice == 3) {
        cout << "Blue";
    }
    else if (Choice == 4) {
        cout << "Purple";
    }
    else {
        //If user choose something different than 1-4 or gives a string input
        cout << "user is an idiot";
    }
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
