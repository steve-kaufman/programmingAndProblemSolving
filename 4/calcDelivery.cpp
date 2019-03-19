//Problem 4
//calcDelivery.cpp
/*
 * Displays the number of pounds and ounces, as well as the cost of delivery
 * given the number of ounces to be delivered
 */


#include <iostream>
#include <stdio.h>

using namespace std;

int get_weight(){
    int weight;
    cout << "Enter package weight (oz): ";
    cin >> weight;
    return weight;
}

float delivery_charge(int weight){
    if(weight > 16) return 3 + (weight - 16) / 4;
    return 3;
}

void display_charge(int weight, float charge){
    int pounds = weight / 16;
    int ounces = weight % 16;
    cout << "Package weight = " << pounds << " lb. ";
    cout << ounces << " oz." << endl;
    printf("Delivery charge = $%.2f\n", charge);
}

int main(){
    int weight;
    float charge;
    weight = get_weight();
    charge = delivery_charge(weight);
    display_charge(weight, charge);
    return 0;
}
