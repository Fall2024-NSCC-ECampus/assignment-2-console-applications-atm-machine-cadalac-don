#ifndef LOGIN_H
#define LOGIN_H

#endif //LOGIN_H

#include <iostream>
#include <array>
#include <algorithm>

//Global variables - just the ones we need
extern char accountNumber[20];
extern char firstName[20];
extern char lastName[20];
extern char password[20];

using namespace std;

void login() {
    //How should I do comparisons for char? for-loop to compare singular values? char is out of boundaries?
    //I cannot use login without creating an account first
    //any error-handling tips


    //local variables to be compared to global
    char accountID[20];
    char nameLocal[20];
    char pass[20];

    //should compare local info (info given) to global variables - q to quit as any time
    cout<<"\n\nUse q to exit to go to login at any time throughout this process...\n";
    while(true) {
        //USER ID
        cout << "Enter Account ID: \n";
        cin.ignore();
        cin.getline(accountID, 20);

        //quit, compare or invalid options
        if(accountID[0] == 'q' && accountID[1] == NULL)
            printIntroMenu();

        if(accountID[20] == accountID[20])
            break;

        cout << "Invalid Account Name\n";
        }

        //should compare info given to global variables
        while(true) {
            //USER NAME
            cout << "Enter First Name: \n";
            cin.ignore(-1);
            cin.getline(nameLocal, 20);

            if(nameLocal[0] == 'q' && nameLocal[1] == NULL)
                printIntroMenu();

            if(nameLocal[20] == firstName[20])
                break;

            cout << "Invalid Account Name\n";
        }

        //should compare info given to global variables
        while(true) {
            //USER PASSWORD
            cout << "Enter Account Password: \n";
            cin.ignore(-1);
            cin.getline(pass, 20);

            if(pass[0] =='q' && pass[1] == NULL)
                printIntroMenu();

            if(pass[20] == password[20])
                break;

            cout << "Invalid Account Password\n";
        }

        //Add the user's name in this string
        cout << "\nWelcome to ATM machines, " << nameLocal << "!!!" << endl;

        //going to the money-option main menu function of the ATM
        printMainMenu();
    }
