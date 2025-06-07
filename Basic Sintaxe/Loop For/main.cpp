#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int x = 0, y = 0, z = 0; x <= 20 && y <= 30 && z <= 40; x++, y += 2, z += 5) // advanced for loop
    {
        cout << "The counter X index is : " << x << "   " << "The counter Y index is : " << y << "   " << "The counter Z index is : " << z << endl;
    }

    for (int i = 1; i <= 20; i++) // simple for loop
    {
        if (i == 1)
        {
            cout << "\n"
                 << "The counter index is: " << i << endl;
        }
        else
        {
            cout << "The counter index is: " << i << endl;
        }
    }

    return 0;
}