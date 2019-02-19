//Problem 1
//kg2lbs.cpp
/*
 * This program outputs an equivalent number of pounds and ounces
 * given a number of kilograms
 */


#include <iostream>
#include <stdio.h>

using namespace std;


void convert(float kg){
    int pounds; 
    float ounces;
    /* float ounces; */

    pounds = int(kg * 2.2);
    ounces = int(kg * 2.2 * 16 * 10) % 160;

    printf("%g kg = %d lb. %.1f oz.\n", kg, pounds, float(ounces / 10));
}

int main(){
    float kg;
    cout << "Enter weight (kg): ";
    cin >> kg;
    convert(kg);
    return 0;
}
