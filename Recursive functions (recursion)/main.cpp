#include <bits/stdc++.h>
using namespace std;

void counter(int number, int accountant = 0);
int main()
{

    counter(20);
    return 0;
}

void counter(int number, int accountant)
{
    cout << accountant << "\n";
    if (number > accountant)
    {
        counter(number, ++accountant);
    }
}