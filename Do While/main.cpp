#include <bits/stdc++.h>
using namespace std;

int main()
{
    int counter;
    cout << "If the number entered is less than 200,\nthe program will be started repeatedly until the number reaches 200.\nIf the number is greater than or equal to 200,\nthe program will be started only once.\nEnter Your Number: ";
    cin >> counter;
    do // Execute first.
    {

        if (counter == 200)
        {
            cout << "The number is equal to or greater than 200 in the counter";
        }
        else
        {
            cout << "Started: " << counter << endl;
        }

    } while (counter++ < 200); // Check back later.

    return 0;
}