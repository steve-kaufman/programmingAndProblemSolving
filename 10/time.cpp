// Problem 2
//time.cpp
/*
 * Given two "military" (24h) format times, finds the sum of the two times
 * and displays it.
 */

#include <iostream>

using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

Time addTimes(Time time1, Time time2);
void getTime(Time& time);
void displayTime(Time time);

int main(){
    char cont;
    do{
        Time time1, time2, newTime;
        cout << "Enter the first time (hh:mm:ss): ";
        getTime(time1);
        cout << "Enter the second time (hh:mm:ss): ";
        getTime(time2);
        newTime = addTimes(time1, time2);
        cout << "Sum of times (hh:mm:ss) = ";
        displayTime(newTime);
        do{
            cout << "   Enter another time pair? (y or n)? ";
            cin >> cont;
        } while(cont != 'y' && cont != 'n');
    } while(cont == 'y');
    return 0;
}

Time addTimes(Time time1, Time time2){
    Time newTime;
    newTime.seconds = (time1.seconds + time2.seconds) % 60;
    newTime.minutes = (time1.minutes + time2.minutes) % 60 +
                          (time1.seconds + time2.seconds) / 60;
    newTime.hours = (time1.hours + time2.hours) % 24 +
                          ((time1.minutes + time2.minutes) +
                          (time1.seconds + time2.seconds) / 60) / 60;
    return newTime;
}

void getTime(Time& time){
    cin >> time.hours;
    cin.ignore();
    cin >> time.minutes;
    cin.ignore();
    cin >> time.seconds;
}

void displayTime(Time time){
    cout << time.hours << ":" << time.minutes << ":" << time.seconds << endl;
}
