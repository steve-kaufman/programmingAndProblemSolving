#include <iostream>

using namespace std;

int main(){
    float feet, yards, inches, cm, meters;
    cout << "Enter number of feet: ";
    cin >> feet;
    yards = roundf(feet / 3 * 100) / 100;
    printf("= %.2f yards\n", yards);
    inches = roundf(feet * 12 * 100) / 100;
    printf("= %.2f inches\n", inches);
    cm = roundf(feet * 12 * 2.54 * 100) / 100;
    printf("= %.2f cm\n", cm);
    meters = roundf(feet * 12 * 2.54 / 100 * 100) / 100;
    printf("= %.2f meters\n", meters);
    return 0;
}
