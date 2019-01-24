//Given a number of desired miles,
//outputs the required number of 1/14 mile laps.


#include <iostream>

using namespace std;

int main(){
    float miles, laps;
    cout << "Enter the number of miles to jog: ";
    cin >> miles;
    laps = miles * 14;
    cout << "You need to jog " << laps << " laps." << endl;
    return 0;
}
