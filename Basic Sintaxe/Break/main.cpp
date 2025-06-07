#include <bits/stdc++.h>
using namespace std;

int main()
{

    int counter;
    counter = 0;

    while (counter++ < 20)
    {

        cout << "Counter: " << counter << endl;
        if (counter >= 10)
            break; // Break the loop while at number 10 before reaching 20.
    }

    return 0;
}