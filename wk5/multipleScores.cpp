//multipleScores.cpp
/*
 * Given an indefinite number of scores, this program
 * outputs the maximum, minimum, and average of the given scores
 */


#include <iostream>

using namespace std;

int main(){
    int min, max, n, score = 0;
    float avg = 0;

    cout << "Enter score 1: ";
    cin >> score;
    min = max = score;
    n = 1;
    while(score >= 0){
        n++;
        if(score < min) min = score;
        if(score > max) max = score;
        avg += score;
        cout << "Enter score " << n << ": ";
        cin >> score;
    }
    n--;
    cout << avg << endl;
    avg /= (float) n;

    cout << "You entered " << n << " scores." << endl;
    cout << "Maximum score = " << max << endl;
    cout << "Minimum score = " << min << endl;
    cout << "Average score = " << avg << endl;

    return 0;
}
