#include <iostream>

using namespace std;

int main(){
    float feet, yards, inches, cm, meters;
    
    cout << "Enter number of feet: ";
    cin >> feet;
    
    yards = int(feet / 3 * 100 + .5) / 100;
    printf("= %.2f yards\n", yards);
    
    inches = int(feet * 12 * 100 + .5) / 100;
    printf("= %.2f inches\n", inches);
    
    cm = int(feet * 12 * 2.54 * 100 + .5) / 100;
    printf("= %.2f cm\n", cm);
    
    meters = int(feet * 12 * 2.54 + .5) / 100;
    printf("= %.2f meters\n", meters);
    
    return 0;
}
