#include <iostream>
#include "start.h"
#include "printIntroMenu.h"
#include "printMainMenu.h"
#include "createAccount.h"
#include "login.h"

using namespace std;

//global char and double variables
char accountNumber[20];
char firstName[20];
char lastName[20];
char password[20];
double bankBalance;

int main(){
    // TO WRITE A WELCOME MESSAGE HERE
    cout << "\n\nWelcome to ATM machines!\n" << endl;
    // call the function start
    start();
    return 0;
}

/*
 * Allow for multiple users
 * log in and out of the same account with the saved details
 * Write comments
*/

