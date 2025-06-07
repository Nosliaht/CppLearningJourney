#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Array with Loop For

    // int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // int size = sizeof(array) / sizeof(array[0]);

    // for (int i = 0; i < size; i++)
    // {
    //     cout << array[i] << "\n";
    // }

    string lg[4] = {"PT", "EN", "ES", "FR"};
    int ilg;
    cout << "Enter Your preferred language:\n";
    cout << "0 - PT (Portugues)\n";
    cout << "1 - EN (English)\n";
    cout << "2 - ES (Espanol)\n";
    cout << "3 - FR (Francais)\n";
    cin >> ilg;

    if (lg[ilg] == "PT")
    {
        cout << "Seu idioma escolhido foi: " << lg[ilg] << "\n";
    }
    else if (lg[ilg] == "EN")
    {
        cout << "Your chosen language was: " << lg[ilg];
    }
    else if (lg[ilg] == "ES")
    {
        cout << "El idioma elegido fue:" << lg[ilg];
    }
    else if (lg[ilg] == "FR")
    {
        cout << "La langue que vous avez choisie etait: " << lg[ilg];
    }

    return 0;
}
