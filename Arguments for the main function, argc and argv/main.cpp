#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{

    if (argc > 1)
    {
        if (!strcmp(argv[1], "Sun"))
        {
            cout << "I'm going to the club";
        }
        else if (!strcmp(argv[1], "cloudy"))
        {
            cout << "I'm going to the movies";
        }
        else
        {
            cout << "I'm going to stay home";
        }
    }

    system("pause");

    return 0;
}