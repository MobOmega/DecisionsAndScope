#include <iostream>

using namespace std;

int main() {

    cout << "Enter first card: ";
    string value1;
    string of;
    string suit1;
    cin >> value1 >> of >> suit1;
    cout << "Enter second card: ";
    string value2;
    string suit2;
    cin >> value2 >> of >> suit2;
    cout << endl;

    if (value1 != value2) {

        cout << "Different cards";
        return 0;

    }

    if (suit1 != suit2) {

        cout << "Different cards";
        return 0;

    }

    cout << "Same card";
    return 0;
}