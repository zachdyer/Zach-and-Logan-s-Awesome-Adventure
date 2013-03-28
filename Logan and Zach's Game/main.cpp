#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

int main()
{
    string title ="LOGAN & ZACH'S AWESOME ADVENTURE";
    cout << title << endl;
    cout << "1. New Game" << endl;
    cout << "2. Continue" <<endl;
    string input;
    cin >> input;
    system("cls");

    if(input == "1") {
        cout << "Welcome, the Adventure begins." << endl;
        string name;
        cout << "What is your name?" << endl;
        cin >> name;
        cout << name << ", woah." << endl;


        string gender;
        cout << "I can't remember, are you a boy or girl?" << endl;
        cout << "1. Male \n2. Female" << endl;
        cin >> gender;
        if (gender == "1") {
            cout << "You're a dude!" << endl;
            gender = "male";
        }
        else if(gender == "2") {
            cout << "You're a chick!" << endl;
            gender = "female";
            }

        cout << "What a nice house, " << name << "." << endl;
        cout << "The dishes are piled in the sink. \nThe floor is covered in dog pee and poop. \n1You only have half an hour till work." << endl;

        cout << "Ready to go to Work?" << endl;
    }
    else if(input == "2") {
        cout << "Let's get back to business.";
    }




    return 0;
}
