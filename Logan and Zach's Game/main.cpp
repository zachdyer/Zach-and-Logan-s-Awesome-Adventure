#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

//Global Variables
int input = 0;
string name;
string gender;
int playerLocation = 1;
int minutes = 30;

void menuFuncStat(){
    system("cls");
    cout << "PLAYER STATUS\n" << endl;
    cout << "Name: " << name << endl;
    cout << "Gender: " << gender << endl;
    system("pause");
    return;
}
void menuFunc(){
    while(true){
        system("cls");
        cout << "MAIN MENU\n" << endl;
        cout << "1. Status" << endl;
        cout << "0. Exit menu" << endl;
        cin >> input;
        if(input == 1){
            menuFuncStat();
        } else if(input == 0){
            system("cls");
            break;
        }
    }
    return;
}
void titleScreen(){
    system("cls");
    string title ="LOGAN & ZACH'S AWESOME ADVENTURE";
    cout << title << endl;
    cout << "1. New Game" << endl;
    cout << "2. Continue" << endl;
    cout << "3. Quit" << endl;
    cin >> input;
    return;
}
void characterSetup(){
    system("cls");
    cout << "Welcome, the Adventure begins." << endl;
    cout << "What is your name?" << endl;
    cin.ignore();// Pause before it skips
    getline(cin, name); // Get the hole line
    system("cls");
    cout << name << ", woah." << endl;
    cout << "I can't remember, are you a boy or girl?" << endl;
    cout << "1. Male" << endl;
    cout << "2. Female" << endl;
    cin >> input;
    if (input == 1) {
        cout << "You're a dude!" << endl;
        gender = "Male";
    }
    else if(input == 2) {
        cout << "Dang, girl, you got it going on!" << endl;
        gender = "Female";
    }
    system("pause");
    return;
}
void playGame(){
    while(playerLocation != 0){
        switch(playerLocation){
            case 1: {
                bool dishesDone = false;
                bool floorClean = false;
                while(playerLocation == 1){
                    system("cls");
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
                    cout << "0. Menu" << endl;
                    cin >> input;
                    switch(input){
                        case 0:
                            menuFunc();
                            break;
                        case 1:
                            minutes -= 15;
                            dishesDone = true;
                            break;
                        case 2:
                            minutes -= 15;
                            floorClean = true;
                            break;
                        case 3:
                            minutes -= 15;
                            playerLocation = 2;
                            break;
                    }
                }
                break;
            }
            case 2: {
                system("cls");
                if(minutes < 0){
                    cout << "Your late for your job. Your boss fires you.\n" << endl;
                    cout << "\t\t\t\tGAME OVER";
                    playerLocation = 0;
                } else {
                    cout << "You made it in time for work.";
                }
                while(playerLocation == 2){
                    system("cls");
                    cout << "You are a dishwasher at Whispers." << endl;
                    switch(input){
                        case 1:
                            break;
                    }
                }
                break;
            }
        }
    }
    return;
}

int main()
{
    titleScreen();
    switch(input){
        case 1:
            characterSetup();
            playGame();
            break;
        case 2:
            cout << "Let's get back to business.";
            break;
        case 3:
            cout << "Thanks for playing!";
            break;
    }
    return 0;
}
