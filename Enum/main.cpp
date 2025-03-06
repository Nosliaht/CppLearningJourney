#include <bits/stdc++.h>
using namespace std;

int main()
{
    enum guns
    {
        rifle = 100,
        sniper = 9,
        shotgun = 12,
        machine_gun = 1,
    };
    guns gun_select;
    gun_select = rifle;
    cout << gun_select;

    return 0;
}