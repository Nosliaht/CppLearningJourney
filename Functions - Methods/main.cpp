#include <bits/stdc++.h>
using namespace std;

void text();
void sum(int n1, int n2);
int sum2(int n1, int n2);
void tr(string tra[4]);

int main()
{
    string transport[4] = {"car", "motorcycle", "boat", "airplane"};
    text();
    sum(7, 4);
    int res;
    res = sum2(175, 25);
    cout << "Sum2 of values: " << res << endl;

    tr(transport);

    return 0;
}

void text()
{
    cout << "My code name is [DEV]Mestick. c:\n";
}

void sum(int n1, int n2)
{
    cout << "Sum of values: " << n1 + n2 << endl;
}

int sum2(int n1, int n2)
{
    return n1 + n2;
}

void tr(string tra[4])
{
    for (int i = 0; i < 4; i++)
    {
        cout << tra[i] << "\n";
    }
}