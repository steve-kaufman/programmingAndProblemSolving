//costOfShirts.cpp
/*
 * This program outputs the total shirt cost, shipping and handling fee, and
 * grand total of an order of shirts given the number of ordered shirts
 */


#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int shirts;
    float costPerShirt, subTotal, fee, total;
    
    cout << "Enter number of shirts: ";
    cin >> shirts;

    if(shirts < 4) costPerShirt = 11.95;
    else if(shirts < 8) costPerShirt = 9.95;
    else costPerShirt = 7.95;

    subTotal = costPerShirt * shirts;
    
    if(subTotal <= 25) fee = 3.50;
    else if(subTotal <= 75) fee = 5.95;
    else fee = 7.95;

    total = subTotal + fee;

    printf("Total shirt cost = $%.2f\n", subTotal);
    printf("Shipping and handling = $%.2f\n", fee);
    printf("Total final cost = $%.2f\n", total);

    return 0;
}
