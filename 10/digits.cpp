// Problem 4
//digits.cpp
/*
 * This program outputs the number of digits in a given number
 */

#include <iostream>
#include <cmath>

using namespace std;

int digits(int number, int place = 1);

int main(){
    int number;
    char cont;
    do{
        cout << "Enter integer: ";
        cin >> number;
        cout << number << " has " << digits(number) << " digits." << endl;
        do{
            cout << "Do another? (y or n): ";
            cin >> cont;
        } while(cont != 'y' && cont != 'n');
    } while(cont == 'y');
    return 0;
}

int digits(int number, int place){
    if(number == 0) return 1;
    if(number < 0) number *= -1;
    if(number / int(pow(10, place)) > 0) return digits(number, place + 1);
    return place;
}
