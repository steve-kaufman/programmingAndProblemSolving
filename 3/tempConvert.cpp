//tempConvert.cpp
//Converts celcius to farenheit of farenheit to celcius

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    float input, output;
    char type;

    cout << "Enter temperature and type (C or F): ";
    cin >> input >> type;

    if(type == 'C') output = 1.8 * input + 32;
    if(type == 'F') output = (input - 32) * (5.0 / 9.0);

    printf("%g %c = %g %c\n", input, type, output, type == 'C' ? 'F' : 'C');

    return 0;
}
