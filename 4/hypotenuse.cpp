//Problem 2
// hypotenuse.cpp
/*
 * This program outputs the hypotenuse of a right triangle
 * given its two other sides
 */

#include <iostream>
#include <cmath>

using namespace std;


float hypot(float s1, float s2){
    return sqrt(s1 * s1 + s2 * s2);
}

int main(){
    float s1, s2;
    cout << "Enter the side lengths: ";
    cin >> s1 >> s2;
    cout << "First side length = " << s1 << endl;
    cout << "Second side length = " << s2 << endl;
    cout << "Hypotenuse length = " << hypot(s1, s2) << endl;
    return 0;
}
