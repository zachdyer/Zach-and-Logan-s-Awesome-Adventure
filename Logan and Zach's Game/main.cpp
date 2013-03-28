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
    cout << "3. Quit" <<endl;
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
            system("cls");
            cout << "You're a dude!" << endl;
            gender = "male";
        }
        else if(gender == "2") {
            system("cls");
            cout << "Dang, girl, you got it going on!" << endl;
            gender = "female";
            }
        int minutes = 30;
        bool dishesDone = false;
        bool floorClean = false;
        while(true){
            cout << "What a nice house, " << name << "." << endl;
            if(dishesDone == false){
                cout << "The dishes are piled in the sink." << endl;
            } else {
                cout << "The dishes are done." << endl;
            }
            if(floorClean == false){
                cout << "The floor is covered in dog pee and poop." << endl;
            } else {
                cout << "The floors are clean and sparkling." << endl;
            }
            cout << "You only have " << minutes << " minutes till work." << endl;
            cout << "1. Do the dishes - 15 min" << endl;
            cout << "2. Clean floors - 15 min" << endl;
            cout << "3. Walk to work - 15 min" << endl;
            cin >> input;
            if(input == "1" && dishesDone == false){
                minutes -= 15;
                dishesDone = true;
                system("cls");
            } else if(input == "2" && floorClean == false){
                minutes -= 15;
                floorClean = true;
                system("cls");
            } else if(input == "3"){
                minutes -= 15;
                system("cls");
                break;
            } else {
                system("cls");
            }
        }
    }
    else if(input == "2") {
        cout << "Let's get back to business.";
    } else{
        return 0;
    }
}
