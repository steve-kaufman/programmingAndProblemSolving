//properDivisors.cpp
/*
 * Given a number outputs its proper divisors
 */


#include <iostream>

using namespace std;

int main(){
    bool running = true;

    while(running){

    int n, i;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Proper divisors: ";
    for(i = 2; i < n; i++){
        if((float) n / i == (int) n / i) cout << i << " ";
    }
    cout << endl;
    cout << "Number of proper divisors = " << i << endl;

    char cont;
    cout << "Continue? (y or n): ";
    cin >> cont;
    running = !(cont == 'n');

    }

    return 0;
}
