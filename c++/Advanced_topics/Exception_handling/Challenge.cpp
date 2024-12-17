#include <iostream>
using namespace std;

int withdraw(int bal, int with_amt) {
    if (with_amt <= 0) {
        throw "Withdrawal amount must be positive.";
    }
    if (bal - with_amt < 0) {
        throw "Insufficient balance.";
    }
    return bal - with_amt;
}

int deposit(int bal, int dep_amt) {
    if (dep_amt <= 0) {
        throw "Deposit amount must be positive.";
    }
    return bal + dep_amt;
}

int main() {
    int bal = 0; // Initial balance
    try {
        while (true) {
            cout << "\nBanking System Menu:\n";
            cout << "1. Deposit\n2. Withdraw\n3. Exit\n";
            cout << "Enter your choice: ";
            
            int ch;
            cin >> ch;

            if (ch == 1) {
                int dep;
                cout << "Enter deposit amount: ";
                cin >> dep;
                bal = deposit(bal, dep);
                cout << "Deposit successful! Current balance: " << bal << endl;
            } 
            else if (ch == 2) {
                int wth;
                cout << "Enter withdrawal amount: ";
                cin >> wth;
                bal = withdraw(bal, wth);
                cout << "Withdrawal successful! Current balance: " << bal << endl;
            } 
            else if (ch == 3) {
                cout << "Exiting program. Final balance: " << bal << endl;
                break;
            } 
            else {
                cout << "Invalid choice. Please try again.\n";
            }
        }
    } 
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
