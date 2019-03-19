//Problem 3
//calcwage.cpp
/*
 * This program outputs the total wages received
 * given a number of hours worked and a wage rate
 */


#include <iostream>
#include <stdio.h>

using namespace std;

float calcwage(float hours, float wage){
    if(hours <= 40) return hours * wage;
    else return 40 * wage + (hours - 40) * wage * 1.5;
}

int main(){
    float hours, wage;
    cout << "Enter hours worked: ";
    cin >> hours;
    cout << "Enter wage rate: $";
    cin >> wage;
    printf("Total wages = $%.2f\n", calcwage(hours, wage));
    return 0;
}
