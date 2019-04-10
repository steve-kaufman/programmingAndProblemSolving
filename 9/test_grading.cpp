//test_grading.cpp
/*
 * Given a list of twelve test scores and the names of each student,
 * will add five points to each score if either nobody's score is over 90
 * or if the average score is below 70.
 * Displays a table with student names, raw test scores, and curved scores.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int raw[12], curved[12], total = 0;
    bool curve = false;
    float curveAverage = 0;
    string names[12];
    for(int i = 0; i < 12; i++){
        cout << "Enter name " << i+1 << " and score: ";
        cin >> names[i] >> raw[i];
        total += raw[i];
        if(raw[i] > 90) curve = true;
    }
    if(float(total / 12) < 70) curve = true;

    if(curve) for(int i = 0; i < 12; i++){
        if(raw[i] <= 95) curved[i] = raw[i] + 5;
        else curved[i] = 100;
        curveAverage += curved[i];
    }
    else for(int i = 0; i < 12; i++){
        curved[i] = raw[i];
        curveAverage += curved[i];
    }
    curveAverage /= float(12);

    cout << endl << setw(20) << right <<  "NAME" 
        << left << "\tRAW SCORES CURVED SCORES" << endl;
    for(int i = 0; i < 12; i++){
        cout << setw(20) << right << names[i] << "\t"
            << setw(6) << raw[i] << setw(13) <<  curved[i] << endl;
    }

    cout << "\nRaw score average = " << (float) total / 12 << endl;
    cout << "Curved score average = " << curveAverage << endl;

    return 0;


    /* cout << setw(10) << right <<  "NAME" */ 
    /*     << left << "\tRAW SCORES CURVED SCORES" << endl; */
    /* for(int i = 0; i < 12; i++){ */
    /*     cout << setw(10) << right << names[i] << "\t" */
    /*         << setw(6) << raw[i] << setw(12) <<  raw[i] << endl; */
    /* } */

    /* return 0; */
}
