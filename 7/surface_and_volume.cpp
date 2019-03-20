//surface_and_volume.cpp
/*
 * Given the radius and height of a can
 * outputs the surface area and volume of the can
 */

#include <iostream>

using namespace std;

const float PI = 3.141592654;

void calc(float r, float h, float& A, float& V);

int main(){
    float r, h, A, V;
    string running;

    do{
        //get radius and height
        cout << "Enter can radius (inches): ";
        cin >> r;
        cout << "Enter can height (inches): ";
        cin >> h;

        //calculate A and V with given r and h
        calc(r, h, A, V);

        cout << "Can surface area " << A << " square inches" << endl;
        cout << "Can volume = " << V << " cubic inches" << endl;

        //check is user will try again
        do{
            cout << "Enter another (y or n)? ";
            cin >> running;
        } while(
                running != "n" && running != "N" &&
                running != "y" && running != "Y" 
               );
    } while(running != "n" && running != "N");

    return 0;
}

//calculate surface area and volume given radius and height;
//modifies A and V
void calc(float r, float h, float& A, float& V){
    A = (2 * PI * r * h) + (2 * PI * (r * r));
    V = PI * (r * r) * h;
}
