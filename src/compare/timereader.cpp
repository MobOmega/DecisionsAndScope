#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "Enter hour in integer form and suffix(am or pm): ";

    int hour;
    cin >> hour;
    if (cin.fail()) {
        cout << "Error: Not an integer." << endl;
    }
    else if (hour >= 1 && hour <= 12) {
        string suffix;
        cin >> suffix;
        if (suffix == "am" || suffix == "pm") {
            if (suffix == "am" && hour == 12) {
                hour = 0;
            }
            if (suffix == "pm" && hour != 12) {
                hour = hour + 12;
            }
            cout << hour << endl;
        }
        else {
            cout << "Error: The suffix must be am or pm." << endl;
        }
    }
    else {
        cout << "Error: The hour must be between 1 and 12." << endl;
    }

    return 0;

}