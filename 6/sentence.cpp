//sentence.cpp
/*
 * Given a sentence, determines the number of words, longest word,
 * and average length of all words.
 */

#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string word, longestWord;
    int words, total;
    float average;

    longestWord = "";
    total = 0;

    cout << "Enter a sentence:" << endl;

    cin >> word ;
    
    for(words = 0; word != "!" && word != "?" && word != "."; words++){
        if(word != "," && word != ";"){
            total += word.length();
            if(word.length() > longestWord.length()) longestWord = word;
        }
        else words--;
        cin >> word;
    }

    average = (float) total / words;

    cout << "Number of words = "    << words       << endl;
    cout << "Average word words = " << average     << endl;
    cout << "Longest word: "        << longestWord << endl;

    return 0;
}
