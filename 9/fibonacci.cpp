//fibonacci.cpp
/*
 * Finds the first 30 numbers of the fibonacci sequence,
 * displays each number that is greater than one,
 * and its ratio to the last number
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int numbers[30] = {1, 1};
    cout << fixed;
    cout << "FIB#\t\t" << "RATIO" << endl;
    for(int i = 2; i < 30; i++){
        numbers[i] = numbers[i-1] + numbers[i-2];
        float ratioToLast = (float) numbers[i] / numbers[i-1];
        cout << numbers[i] << "\t\t" << setprecision(8) << ratioToLast << endl;
    }
    return 0;
}
