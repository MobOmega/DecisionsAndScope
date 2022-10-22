#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main() {

    bool x;
    int y;

    cout << "Input y: ";
    cin >> y;

    x = (y > 17);

    if (x) {

        cout << "y is greater than 17." << endl;

    } else {

        cout << "y is not greater than 17." << endl;

    }

}