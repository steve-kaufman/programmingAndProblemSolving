//extremeScores.cpp
/*
 * This program outputs the highest and the lowest of three given scores.
 */
#include <iostream>

using namespace std;

int bigr(int num1, int num2){
    return num1 > num2 ? num1 : num2;
}
int smlr(int num1, int num2){
    return num1 < num2 ? num1 : num2;
}

int main(){
    int input[3];
    int biggest, smallest;
    cout << "Enter three exam scores: ";
    cin >> input[0] >> input[1] >> input[2];
    biggest = bigr(bigr(input[0], input[1]), input[2]);
    smallest = smlr(smlr(input[0], input[1]), input[2]);
    cout << "Highest score = " << biggest << endl;
    cout << "Lowest score = " << smallest << endl;
    return 0;
}

