//feetConvert.cpp
//Given a number of feet,
//outputs the equivalent number of
//yards, inches, centimeters, and meters
//rounded to the nearest hundredth


#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    float feet, yards, inches, cm, meters;
    
    cout << "Enter number of feet: ";
    cin >> feet;
    
    yards = feet / 3;
    printf("= %.2f yards\n", yards);
    
    inches = feet * 12;
    printf("= %.2f inches\n", inches);
    
    cm = feet * 12 * 2.54;
    printf("= %.2f cm\n", cm);
    
    meters = feet * 12 * 2.54 / 100;
    printf("= %.2f meters\n", meters);
    
    return 0;
}
