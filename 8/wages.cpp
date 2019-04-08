#include <iostream>
#include <iomanip>

using namespace std;

int wage(float rate, int overtime=0);

int main(){
    float  rate, wages;
    int    overtime;
    string name, didOvertime, cont;

    do{
        cout << "Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter rate: $";
        cin >> rate;

        do{
            string prompt = "Overtime? (y or n): ";
            cout << prompt;
            cin >> didOvertime;
        } while(didOvertime != "y" && didOvertime != "n");

        if(didOvertime == "y"){
            cout << "Enter overtime hours: ";
            cin >> overtime;
            wages = wage(rate, overtime);
        }

        else wages = wage(rate);
        cout << fixed;
        cout << "Name: " << name << " Wages: $" <<
            setprecision(2) <<  wages << endl;

        do{
            cout << "Enter another? (y or n): ";
            cin >> cont;
        } while(cont != "y" && cont != "n");
    } while(cont == "y");

    return 0;
}

int wage(float rate, int overtime){
    return rate * 40 + rate * 1.5 * overtime;
}
