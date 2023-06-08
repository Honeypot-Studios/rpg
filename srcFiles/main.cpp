#include <iostream>
#include "../headerFiles/player.h"
using namespace std;

void print(string str);
void displayClassesPlusLore();
void displayMainMenu();


int main() {
    Player* p = new Player(); 
    displayClassesPlusLore();
    print("Input: ");
    int classChoice = 0;
    cin >> classChoice;

    displayMainMenu();
    print("Input: ");
    int menuChoice = -1;
    cin >> menuChoice;

    while(menuChoice != 0) {
        if(menuChoice == 1) {
            //fight loop
            print("You fought and lost \n");
            cin.ignore(); cin.ignore();
        }
        if (menuChoice == 2) {
            //skills tree gui
            print("Welcome to Skill Tree \n");
            cin.ignore(); cin.ignore();
        }
        
        
        //Choice has been excuted, ask for new choice, while loop will check for quit
        displayMainMenu();
        print("Input: ");
        cin >> menuChoice;
    }

    p->printStats();
    cin.ignore(); cin.ignore();
    print("Game over... \n");
    return 0;
}


void displayClassesPlusLore() {print("Choose a class: \n");}
void displayMainMenu() {print("Choose something to do: \n");}
void print(string str) {cout << str;}