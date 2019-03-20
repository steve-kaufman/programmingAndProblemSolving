//change.cpp
/*
 * Given a price amount and an amount tendered,
 * outputs the change due, along with the minimum number of bills and coins
 */

#include <iostream>

using namespace std;

void input(float& price, float& tender);
void change(float price, float tender, int& dollars, int& cents);

void bills(int dollars, int& twenties, int& tens, int& fives, int& ones);
void coins(int cents, int& quarters, int& dimes, int& nickels, int& pennies);
void display(
    float price, float tender, int dollars, int cents,
    int twenties, int tens, int fives, int ones,
    int quarters, int dimes, int nickels, int pennies
    );

int main(){
    float price, tender;
    int dollars, cents;
    int twenties, tens, fives, ones;
    int quarters, dimes, nickels, pennies;
    string running;

    do{
        //get purchase amount and amount tendered from user
        input(price, tender);
        //calculate change into int dollars and int cents
        change(price, tender, dollars, cents);
        //calculate number of each kind of bill
        bills(dollars, twenties, tens, fives, ones);
        //calculate number of each kind of coin
        coins(cents, quarters, dimes, nickels, pennies);
        //display all calculated information
        display(price, tender, dollars, cents, 
                twenties, tens, fives, ones,
                quarters, dimes, nickels, pennies);

        //check if user wants to try again
        do{
            cout << "Continue (y or n)? ";
            cin >> running;
        } while(
                running != "n" && running != "N" &&
                running != "y" && running != "Y" 
               );
    } while(running != "n" && running != "N");
    
    return 0;
}

//gets purchase amount and amount tendered from user
//modifies reference variables price and tender
void input(float& price, float& tender){
    cout << "Enter purchase amount: $";
    cin >> price;
    cout << "Enter amount tendered: $";
    cin >> tender;
}

//calculates amount of change based on price and tender
//modifies reference variables dollars and cents
void change(float price, float tender, int& dollars, int& cents){
    float change = tender - price;
    dollars = int(change);
    cents = int((change - dollars) * 100 + 0.5);
}

//calculates number of each kind of bill (20s, 10s, 5s, 1s)
//modifies reference variables for each kind of bill
void bills(int dollars, int& twenties, int& tens, int& fives, int& ones){
    twenties = dollars / 20;
    tens = dollars % 20 / 10;
    fives = dollars % 10 / 5;
    ones = dollars % 5;
}

//calculates number of each kind of coin (quarters, dimes, nickels, pennies)
//modifies reference variables for each kind of coin
void coins(int cents, int& quarters, int& dimes, int& nickels, int& pennies){
    quarters = cents / 25;
    dimes = cents % 25 / 10;
    nickels = cents % 25 % 10 / 5;
    pennies = cents % 5;
}

//displays all calculated information
//change, bills, coins, etc.
void display(
    float price, float tender, int dollars, int cents,
    int twenties, int tens, int fives, int ones,
    int quarters, int dimes, int nickels, int pennies
    ){
    cout << "Amount of purchase: $" << price << endl;
    cout << "Amount tendered: $"    << price << endl;

    cout << "Change due: $" << dollars << "." << cents << endl;

    cout << "Bills:" << endl;
    cout << twenties << " - $20's  ";
    cout << tens     << " - $10's  ";
    cout << fives    << " - $5's  ";
    cout << ones     << " - $1's" << endl;;

    cout << "Coins:" << endl;
    cout << quarters << " - quarter(s)  ";
    cout << dimes    << " - dimes(s)  ";
    cout << nickels  << " - nickel(s)  ";
    cout << pennies  << " - penny(ies)" << endl;;
}
