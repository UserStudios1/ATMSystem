#include <iostream>

using namespace std;

void showMenu() {
    cout << "==========MENU==========\n";
    cout << "PLEASE SELECT A OPTION:\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposite\n";
    cout << "3. Withdraw\n";
    cout << "4. Exit\n";
    cout << "========================\n\n";
}

int main()
{
    cout << "=========WELCOME TO USERSTUDIOS1 ATM SYSTEM==========\n\n";

    int option;
    double balance = 0;
    do {
        showMenu();
        cin >> option;
        system("cls");
        switch (option) {
        case 1:
            cout << "Your Balance is " << balance << "$\n";
            break;
        case 2:
            cout << "How much Money would you like to deposite?\n";
            double depositeAmount;
            cin >> depositeAmount;
            balance += depositeAmount;
            break;
        case 3:
            cout << "How much Money would you like to withdraw?\n";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout << "Not enough Money on the Balance to Withdraw!\n";
            break;
        }
    } while (option != 4);
    cout << "Goodbye and thank you for using UserStudios1 ATM System!\n";
    return 0;
}
