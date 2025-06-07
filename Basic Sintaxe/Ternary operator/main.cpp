#include <bits/stdc++.h>
using namespace std;

int main()
{

    int note1, note2, average;
    string res;

    cout << "Enter Your First Note: ";
    cin >> note1;
    cout << "Enter Your Second Note: ";
    cin >> note2;

    average = (note1 + note2) / 2;

    res = (average >= 7) ? "Your grade was greater than or equal to 7, you passed." : "Your grade was lower than 7, you failed.";
    cout << res << "\n"
         << "Your Average: " << average;

    return 0;
}