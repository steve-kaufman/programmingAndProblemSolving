#include <iostream>

using namespace std;

int main(){
    float l, w, h, surface, volume;
    cout << "Enter box length, width, and height (inches): ";
    cin >> l >> w >> h;
    surface = 2 * (l * w + w * h + h * l);
    volume = l * w * h;
    cout << "Box surface area = " << surface << " square inches" << endl;
    cout << "Box volume = " << volume << " cubic inches" << endl;
    return 0;
}
