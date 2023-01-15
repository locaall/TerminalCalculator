#include <iostream>
#include <fstream>
#include "calc.h"
#include "Calc.cpp"
using namespace std;

void Title(string fileName) {
    string line = "";
    ifstream inFile;
    inFile.open("cmdcalc.txt");
    if (inFile.is_open()) {
        while(getline(inFile, line)) {
            cout << line << endl;
        }
    } else {
        cout << "Error occured." << endl;
    }
    inFile.close();
    cout << endl;
}

int main() {
    string fileName = "cmdcalc.txt";
    Title(fileName);
    double x = 0, y = 0, result = 0;
    char operation = '+';
    
    cout << "Please enter the operation to perform. Format is: a+b | a-b | a*b | a/b" << endl;

    Calculator c;
    while(1) {
        cin >> x >> operation >> y;
        if (operation == '/' && y == 0) {
            cout << "Cannot divide by zero!" << endl;
            continue;
        } else {
            result = c.Calculate(x, operation, y);
        }
        cout << endl <<  "Result: " << result << endl;
    } 
    return 0;
}