#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n1, n2, Average;
    char opc;

start:
    cout << "Enter Your Fisrt Note: " << "\n";
    cin >> n1;
    cout << "Enter Your Second Note: " << "\n";
    cin >> n2;

    Average = (n1 + n2) / 2;

    if (Average >= 7)
    {
        cout << "Your Average: " << Average << "\n";
        cout << "You're Approved c: sz\n";
    }
    else if (Average < 7 || Average > 4)
    {
        cout << "Your Average: " << Average << "\n";
        cout << "You're in Recuperation! :o\n";
    }
    else if (Average < 4)
    {
        cout << "Your Average: " << Average << "\n";
        cout << "You're Reprovede! :c\n";
    }

    cout << "Want to check more notes? [Y/N]: ";
    cin >> opc;

    if (std::tolower(opc) == 'y')
    {
        goto start;
    }
    else
    {
        cout << "Thank you for using and testing my program!";
    }

    return 0;
}