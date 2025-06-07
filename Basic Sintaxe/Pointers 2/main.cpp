#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p;
    int matrix[10];

    p = &matrix[0];
    *p = 10;
    cout << matrix[0] << endl;
    *(p += 1);
    *p = 20;
    cout << matrix[1] << endl;
    *(p += 1);
    *p = 30;
    cout << matrix[2] << endl;

    for (int i = 0; i < 10; i++)
    {

        p = &matrix[i];
        cout << p << "\n";

        *(p += 1);
        *p = 10;
        cout << matrix[i] << endl;
    }

    return 0;
}