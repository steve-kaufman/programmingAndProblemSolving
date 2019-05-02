// Problem 3
//exponent.cpp
/*
 * Given a value 'x' and a value 'n', this program outputs 
 * x to the nth power
 */

#include <iostream>

using namespace std;

void rec_power(float x, int n, float &total);

int main(){
    float x, total;
    int n;
    char cont;
    do{
        total = 1;
        cout << "Enter x: ";
        cin >> x;
        cout << "Enter n: ";
        cin >> n;
        if(n != 0) {
            if(n > 0) rec_power(x, n, total);
            else {
                rec_power(x, n * -1, total);
                total = (float) 1 / total;
            }
        }
        cout << "Result: " << total << endl;
        do{
            cout << "Enter another? ";
            cin >> cont;
        } while(cont != 'y' && cont != 'n');
    } while(cont == 'y');
    return 0;
}

void rec_power(float x, int n, float &total){
    total *= x;
    n--;
    if(n > 0) rec_power(x, n, total);
}
