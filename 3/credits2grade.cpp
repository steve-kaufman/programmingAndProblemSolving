//credits2grade.cpp

/* Determines a student's grade level based on the number of credits they
have earned */

#include <iostream>
#include <string>

using namespace std;

int main(){
    int credits, grade;
    string grades[] = {"Freshman", "Sophomore", "Junior", "Senior"};

    cout << "Enter number of credits: ";
    cin >> credits;

    grade = credits / 32 > 3 ? 3 : credits / 32;

    cout << "Grade level: " << grades[grade] << endl;

    return 0;
}
