//coins2usd.cpp
//Given a number of quarters, dimes, nickels, and pennies,
//outputs the total amount of money in dollars.


#include <iostream>

using namespace std;

int main(){
    int quarters, dimes, nickels, pennies;
    float total;
    cout << "Enter number of quarters: ";
    cin >> quarters;
    cout << "Enter number of dimes: ";
    cin >> dimes;
    cout << "Enter number of nickels: ";
    cin >> nickels;
    cout << "Enter number of pennies: ";
    cin >> pennies;
    total = 
        quarters * 0.25 +
        dimes * 0.1 +
        nickels * 0.05 +
        pennies * 0.01;
    printf("%d quarters, %d dimes, %d nickels, %d pennies = $%0.2f\n",
            quarters, dimes, nickels, pennies, total);
    return 0;
}
