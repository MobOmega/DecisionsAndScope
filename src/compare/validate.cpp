#include <iostream>

using namespace std;

int main() {

    cout << "Enter the month as an integer (1=Jan, 2=Feb, etc.): ";
    int month;
    cin >> month;

    if (month >= 1 && month <= 12) {

        cout << month << " is a valid month." << endl;

    } else {

        cout << month << " is not a valid month." << endl;

    }

}