// Problem 1
//midpoint.cpp
/*
 * Given two 2-dimensional points, this program displays
 * the midpoint between the two points
 */

#include <iostream>
#include <cstring>

using namespace std;

struct Point {
    float x;
    float y;
};

Point get_midpoint(Point point1, Point point2);
void display_point(Point point);

int main(){
    char cont;
    Point point1, point2, midpoint;
    do {
        cont = ' ';

        cout << "Enter 1st point (x,y): ";
        cin.ignore();
        cin >> point1.x;
        cin.ignore();
        cin >> point1.y;
        cin.ignore();


        cout << "Enter 2nd point (x,y): ";
        cin.ignore(2);
        cin >> point2.x;
        cin.ignore();
        cin >> point2.y;
        cin.ignore();

        cout << "Point 2 is "; display_point(point2); cout << endl;

        midpoint = get_midpoint(point1, point2);

        cout << "Midpoint between ";
        display_point(point1);
        cout << " and ";
        display_point(point2);
        cout << " is ";
        display_point(midpoint);
        cout << endl;
        
        do{
            cout << "Continue (y or n)? ";
            cin >> cont;
        } while(cont != 'y' && cont != 'n');

        cin.ignore();
    } while(cont == 'y');
    return 0;
}


Point get_midpoint(Point point1, Point point2){
    Point midpoint;
    midpoint.x = (point1.x + point2.x) / 2;
    midpoint.y = (point1.y + point2.y) / 2;
    return midpoint;
}


void display_point(Point point){
    cout << "(" << point.x << "," << point.y << ")";
};
