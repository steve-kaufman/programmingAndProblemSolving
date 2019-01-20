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
