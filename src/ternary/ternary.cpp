#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main() {

    int floor;
    cout << "Enter elevator floor: ";
    cin >> floor;
    int actual_floor = floor > 13 ? --floor : floor;

    cout << "An elevator will travel to the actual floor of " << actual_floor << endl;
    return 0;

}