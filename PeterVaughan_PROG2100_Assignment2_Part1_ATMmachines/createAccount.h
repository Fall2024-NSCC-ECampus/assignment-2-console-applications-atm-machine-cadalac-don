#ifndef CREATEACCOUNT_H
#define CREATEACCOUNT_H
#endif //CREATEACCOUNT_H

#include <iostream>
#include  <bits/stdc++.h>

//global variables
extern char accountNumber[20];
extern char firstName[20];
extern char lastName[20];
extern char password[20];
extern double bankBalance;

using namespace std;

void accountCreationChoice();

//just for testing - diagnostic tool
void testing();

void createAccount(){
    //clear the variables after quiting
    //error-handling for int for q input

    cout<<"\n\nUse q to exit to go to login at any time throughout this process...\n";
    //USER ID creation and exit logic
    cout << "Create Account ID (number and letters allowed): \n";
    cin.ignore();
    cin.getline(accountNumber, 20);

    //Ability to quit on q as first value
    if(accountNumber[0] == 'q' && accountNumber[1] == NULL) {
        printIntroMenu();
    }

    //user info creation
    cout << "Input Your First Name: \n";
    cin.ignore(-1);
    cin.getline(firstName, 20);

    //Ability to quit on q as first value
    if(firstName[0] == 'q' && accountNumber[1] == NULL) {
        printIntroMenu();
    }

    //user info creation
    cout << "Input Your Last Name: \n";
    cin.ignore(-1);
    cin.getline(lastName, 20);

    //Ability to quit on q as first value
    if(lastName[0] == 'q' && accountNumber[1] == NULL) {
        printIntroMenu();
    }

    //USER PASSWORD creation
    cout << "Create Account Password (number and letters allowed): \n";
    cin.ignore(-1);
    cin.getline(password, 20);

    //Ability to quit on q as first value
    if(password[0] == 'q' && accountNumber[1] == NULL) {
        printIntroMenu();
    }

    //initial balance creation
    cout << "Initial Bank Balance: \n";
    cin >> bankBalance;

    //for testing purposes
    testing();
    
    //allowing for account creation here
    accountCreationChoice();

}


void accountCreationChoice() {

    //local variables
    char choice[2];

    //choice to not create account or to create account until proper choice is selected
    cout << "Do you want to create account? [y/n] \n";
    cin.ignore();
    cin.getline(choice, 2);

    while(true) {
        switch(choice[0]) {

            case 'y':
                //once the account is created, we want to go to the main menu and select login
                printIntroMenu();

            case 'n':
                //let's wipe info before continuing
                printIntroMenu();

            //error handling
            default:
                cout << "Invalid Choice\nTry Again...\n";
        }
    }
}

void testing() {
    //random lines for troubleshooting my code and the values
    cout << endl << accountNumber << endl;
    cout << firstName << endl;
    cout << lastName << endl;
    cout << password << endl;
    printf("%.2f", bankBalance);
    cout << endl << endl;

    cout << sizeof(accountNumber) << endl;
    cout << sizeof(firstName) << endl;
    cout << sizeof(lastName) << endl;
    cout << sizeof(password) << endl;
    cout << endl << endl;
}