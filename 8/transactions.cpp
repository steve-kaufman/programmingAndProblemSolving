//transactions.cpp
/*
 * Starting with a balance of $200, the user may choose to display balance,
 * deposite a given amount of money, withdraw a given amount of money
 * if there is that much money in the account, or exit the program
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    char transaction;
    float balance = 200;
    do{
        cout << "Select transaction - (B)alance (D)eposit (W)ithdraw e(X)it: ";
        cin >> transaction;
        cout << fixed;
        switch(transaction){
            case 'B':
                cout << "Your balance is $" << 
                    setprecision(2) << balance << endl;
                break;
            case 'D':
                float deposit;
                cout << "Enter deposite amount: $";
                cin >> deposit;
                balance += deposit;
                break;
            case 'W':
                float withdraw;
                cout << "Enter withdrawal amount: $";
                cin >> withdraw;
                if(withdraw > balance)
                    cout << 
                    "Amount of withdrawal exceeds balance - transaction denied"
                    << endl;
                else balance -= withdraw;
                break;
            case 'X':
                cout << "Bye - have a nice day" << endl;
                cout << "Your ending balance is $" << 
                    setprecision(2) << balance << endl;
                break;
        }
    } while(transaction != 'X');
    return 0;
}
