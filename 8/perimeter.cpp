#include <iostream>

using namespace std;


const float PI = 3.14159265;

void input(float& a, float& b, float& c);
void input(float& l, float& w);
void input(float& d);

float perim(float a, float b, float c);
float perim(float l, float w);
float perim(float d);

int main(){
    int shape;
    float perimeter;
    bool cont = true;

    do{
        cout << "Select shape (1=circle, 2=rectangle, 3=triangle, other to exit): ";
        cin >> shape;
        switch(shape){
            case 1: 
                float d;
                input(d);
                perimeter = perim(d);
                break;
            case 2: 
                float l, w;
                input(l, w);
                perimeter = perim(l, w);
                break;
            case 3:
                float a, b, c;
                input(a, b, c);
                perimeter = perim(a, b, c);
                break;
            default:
                cont = false;
                cout << "Bye... " << endl;
                break;
        }
        if(cont) cout << "Perimeter = " << perimeter << endl;
    } while(cont);

    return 0;
}

void input(float& a, float& b, float& c){
    cout << "Enter triangle side lengths: ";
    cin >> a >> b >> c;
}
void input(float& l, float& w){
    cout << "Enter rectangle length and width: ";
    cin >> l >> w;
}
void input(float& d){
    cout << "Enter circle diameter: ";
    cin >> d;
}

float perim(float a, float b, float c){
    return a + b + c;
}
float perim(float l, float w){
    return 2 * (l + w);
}
float perim(float d){
    return PI * d;
}
