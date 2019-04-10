//rows_columns.cpp
/*
 * Given a number of rows and columns in a table, as well as
 * the values in each table cell, 
 * Displays the table of values, a list of the sums of each row, and
 * a list of the sums of each column  
 */

#include <iostream>

using namespace std;

int main(){
    int cols, rows;
    string cont;

    do{
        do{
            cout << "Enter the number of rows in the table: ";
            cin >> rows;
            if(rows > 10) cout << "(Must be less than 10!) ";
        } while(rows > 10);
        do{
            cout << "Enter the number of columns in the table: ";
            cin >> cols;
            if(cols > 10) cout << "(Must be less than 10!) ";
        } while(cols > 10);

        int table[rows][cols], colsum[cols], rowsum[rows];
        for(int row = 0; row < rows; row++) rowsum[row] = 0;
        for(int col = 0; col < cols; col++) colsum[col] = 0;

        for(int row = 0; row < rows; row++){
            cout << "Enter row " << row+1 << ": ";
            for(int col = 0; col < cols; col++){
                cin >> table[row][col];
                rowsum[row] += table[row][col];
                colsum[col] += table[row][col];
            }
        }

        cout << "Table:\n";
        for(int row = 0; row < rows; row++){
            for(int col = 0; col < cols; col++) 
                cout << "\t" << table[row][col];
            cout << endl;
        }

        cout << "\nColumn sums:\n";
        for(int col = 0; col < cols; col++) cout << "\t" << colsum[col];
        cout << "\n\n";
        cout << "Row sums:\n";
        for(int row = 0; row < rows; row++) cout << "\t" << rowsum[row];
        cout << "\n\n";

        do{
            cout << "Enter another table (y or n)? ";
            cin >> cont;
        } while(cont != "y" && cont != "n");
        if(cont == "y") cout << endl;
    } while(cont == "y");

    return 0;
}
