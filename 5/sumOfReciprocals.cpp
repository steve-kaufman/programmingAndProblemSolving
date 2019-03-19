//sumOfReciprocals.cpp
/*
 * Outputs the sum of all reciprocals up to the
 * given positive integer
 */


#include <iostream>

using namespace std;

int main(){
    int n;
    float sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for(int i = 0; i < n; i++) sum += (float) 1 / (i + 1);
    cout << "Sum of the first " << n << " reciprocals = " << sum << endl;

    return 0;
}
