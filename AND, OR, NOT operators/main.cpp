#include <bits/stdc++.h>
using namespace std;

int main()
{
    string op, iv;
    int age;
    bool rain = false;

    cout << "Is it raining? [Y/N]\n";
    cin >> op;

    char re = tolower(op[0]);

    cout << "Do you have an Invitation Card? [Y/N]\n";
    cin >> iv;

    char re2 = tolower(iv[0]);

    cout << "Enter Your Age: ";
    cin >> age;

    if (re == 'y')
    {
        rain = true;
    }
    else if (re == 'n')
    {
        rain = false;
    }
    else
    {
        cout << "Invalid input\n";
        return 1;
    }

    cout << (rain ? "It's raining\n" : "It's not raining\n");

    if ((re2 == 'y' && age >= 18) && !rain)
    {
        cout << "You can go to the party.\n";
    }
    else if (re2 == 'n' || age < 18 || rain)
    {
        cout << "You can't go to the party due to the weather or age restriction.\n";
    }

    return 0;
}