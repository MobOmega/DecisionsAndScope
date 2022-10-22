#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main() {

    int floor;
    int actual_floor;

    cout << "Input elevator floor: ";
    cin >> floor;

    if (floor > 13) {

        actual_floor = floor - 1;

    } else if (floor < 0) {

        actual_floor = 0;

    } else {

        actual_floor = floor;

    }

    cout << "The actual elevator floor is: " << actual_floor << endl;

}