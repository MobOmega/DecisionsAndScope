#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int cost = 0;
    cin >> cost;
    if (cost > 100)
    {
        cost = cost – 10;
    }
    cout << "Discount cost: " << cost << endl;

    return 0;
}