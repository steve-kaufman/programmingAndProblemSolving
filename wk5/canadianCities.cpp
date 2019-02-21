//canadianCities.cpp
/*
 * Outputs city and province in "city, province" format
 * given name of city and abbreviation of province
 */


#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main(){
    string city, abbr, province;

    map<string, string> provinces {
        {"AB", "Alberta"},
        {"NB", "New Brunswick"},
        {"NT", "Northwest Terrirories"},
        {"PQ", "Quebec"},
        {"BC", "British Colombia"},
        {"NF", "Newfoundland"},
        {"ON", "Ontario"},
        {"SK", "Saskatchewan"},
        {"MB", "Manitoba"},
        {"NS", "Nova Scotia"},
        {"PE", "Prince Edward Island"},
        {"YK", "Yukon"}
    };

    cout << "Enter city: ";
    getline(cin, city);
    cout << "Enter province abbreviation: ";
    cin >> abbr;

    province = provinces[abbr];

    cout << "You entered: " + city + ", " + province << endl;

    return 0;
}
