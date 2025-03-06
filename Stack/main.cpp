#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<string> cards;
    system("cls");

    if (cards.empty())
    {
        cout << "No cards\n\n";
    }

    cards.push("Heart King");
    cards.push("Spades King");
    cards.push("Diamonds King");
    cards.push("Clubs King");

    if (!cards.empty())
    {
        cout << "Cards Added\n\n";
    }

    cout << "Top item of the stack: " << cards.top() << "\n"; // Displays the first item from the top of the stack
    cout << "Size Stack: " << cards.size() << "\n\n";         // Shows stack size

    cards.pop(); // Remove the first item from the top

    cout << "Top item of the stack: " << cards.top() << "\n"; // Displays the first item from the top of the stack
    cout << "Size Stack: " << cards.size() << "\n\n";         // Shows stack size

    while (!cards.empty())
    {
        cards.pop();
    }

    return 0;
}