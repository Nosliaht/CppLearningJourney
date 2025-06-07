#include <iostream>
using namespace std;
int main()
{
    // Type, name and value.
    int retry = 3;           // Type Integer
    double health = 2000.50; // Type 2 Decimal
    float mana = 100.405;    // Type + Decimal
    char rank = 'D';         // Type 1 caracter
    bool alive = 1;          // Type True or False
    string Nickname;         // Type Caracter
    string alivePlayer;      // Type Caracter

    cout << "Enter Your Nickname: ";
    cin >> Nickname;

    if (alive == 1)
    {
        alivePlayer = "Alive";
    }
    else
    {
        alivePlayer = "Dead";
    }

    cout
        << "Retry Chance: " << retry << endl
        << "Nickname: " << Nickname << endl
        << "Helth: " << health << endl
        << "Eter: " << mana << endl
        << "Rank: " << rank << endl
        << "States: " << alivePlayer << endl;

    system("pause");
    return 0;
}