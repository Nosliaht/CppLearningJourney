#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[3][3];

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cout << "Enter a number for position [" << y << "][" << x << "]: ";
            cin >> matrix[y][x];
        }
    }

    for (int y = 0; y < 3; y++)
    {
        for (int x = 0; x < 3; x++)
        {
            cout << matrix[y][x] << " ";
        }
        cout << endl;
    }

    return 0;
}