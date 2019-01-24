//Given a number of ounces,
//outputs the number of whole quarts and remainder of ounces


#include <iostream>

using namespace std;

int main(){
    int ounces;
    cout << "Enter number of ounces: ";
    cin >> ounces;
    printf("%d ounces = %d qt. and %d oz.\n",
            ounces, ounces / 32, ounces % 32);
    return 0;
}
