#include <bits/stdc++.h>
using namespace std;

void sum(int n1, int n2);
void sum();

int main()
{
    sum(10, 20);
    sum();

    return 0;
}

void sum(int n1, int n2)
{
    int re = n1 + n2;
    cout << "\nThe sum of " << n1 << " and " << n2 << " is equal to: " << re << "\n";
}

void sum()
{
    int n1 = 10, n2 = 20, re;
    re = n1 + n2;
    cout << "\nThe sum of " << n1 << " and " << n2 << " is equal to: " << re << "\n";
}