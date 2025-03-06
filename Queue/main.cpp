#include <bits/stdc++.h>
using namespace std;

int main()
{

    queue<string> cards;
    system("cls");
    cards.push("Heart King");
    cards.push("Spades King");
    cards.push("Diamonds King");
    cards.push("Clubs King");

    cout << "Queue Size: " << cards.size() << "\n";
    cout << "Fisrt Card: " << cards.front() << "\n";
    cout << "Last Card: " << cards.back() << "\n\n";

    while (!cards.empty())
    {
        cout << "Fisrt Card: " << cards.front() << "\n";
        cards.pop();
    }

    return 0;
}