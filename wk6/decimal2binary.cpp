//decimal2binary.cpp
/*
 * Given a positive integer, this program
 * returns the binary equivalent of that number
 */

#include <iostream>

using namespace std;

int main(){
    int num, bin, place, multiplier;
    cout << "Enter a positive integer: ";
    cin >> num;

    bin = 0;
    place = 1;
    multiplier = 1;

    while(num / place){
        bin += num % (place * 2) / place * multiplier;
        place *= 2;
        multiplier *= 10;
    };
    

    cout << num << " decimal = " << bin << " binary" << endl;

    return 0;
}
