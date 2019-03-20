//time.cpp
/*
 * Given a number of seconds, outputs the corresponding number of
 * hours, minutes, and seconds
 */

#include <iostream>

using namespace std;

void time(int inputSeconds, int& hours, int& minutes, int& seconds);

int main(){
    int inputSeconds, hours, minutes, seconds;
    string running;

    do{
        //get raw seconds from user
        cout << "Enter time in seconds: ";
        cin  >> inputSeconds;

        //call function that calculates & modifies h, m, s
        time(inputSeconds, hours, minutes, seconds);

        /*output calculations*/{
            cout << inputSeconds << " = ";
            cout << hours   << " hours, ";
            cout << minutes << " minutes, and ";
            cout << seconds << " seconds" << endl;
        }

        //check if user will try again
        do{
            cout << "Enter another time (y or n)? ";
            cin >> running;
        } while(
            running != "y" && running != "n" && 
            running != "Y" && running != "N"
        );
    } while(running != "n" && running != "N");

    return 0;
}

//calculates and modifies hours, minutes, and seconds
void time(int inputSeconds, int& hours, int& minutes, int& seconds){
    hours = inputSeconds / 60 / 60;
    minutes = inputSeconds / 60 - hours * 60;
    seconds = inputSeconds % 60;
}
