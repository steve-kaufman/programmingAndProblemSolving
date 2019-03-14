#include <iostream>
#include <string>

using namespace std;

int main(){
    int rows = 0;
    cout << "Enter number of rows (>0): ";
    cin >> rows;
    while(rows <= 0){
        cout << "Invalid entry - try again!" << endl;
        cout << "Enter number of rows (>0): ";
        cin >> rows;
    }
    for(int row = 1; row < rows + 1; row++){
        string spaces, stars;
        for(spaces = ""; spaces.length() < rows - row; spaces += " ");
        for(stars = ""; stars.length() < (2 * row - 1); stars += "*");
        cout << spaces << stars << endl;
    }
}
