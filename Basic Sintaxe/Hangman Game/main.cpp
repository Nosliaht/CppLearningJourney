#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("cls");
    char word[30], secret[30];
    int length, i, chance, hits;
    bool hit;

    chance = 6;
    length = 0;
    i = 0;
    hit = false;
    hits = 0;

    cout << "Enter Your Secret Word: \n";
    cin >> word;
    system("cls");

    while (word[i] != '\0')
    {
        i++;
        length++;
    }

    for (i = 0; i < 30; i++)
    {
        secret[i] = '-';
    }

    while ((chance > 0) && (hits < length))
    {
        cout << "Remaining chances: " << chance << "\n\n";
        cout << "Secret Word: ";
        for (i = 0; i < length; i++)
        {
            cout << secret[i];
        }
        cout << "\nEnter your letter: ";
        char letter;
        cin >> letter;

        if (!isalpha(letter))
        {
            cout << "Please enter a valid letter!\n";
            continue;
        }

        letter = tolower(letter);

        hit = false;

        for (i = 0; i < length; i++)
        {
            if (letter == tolower(word[i]))
            {
                hit = true;
                secret[i] = word[i];
                hits++;
            }
        }

        if (!hit)
        {
            chance--;
        }

        system("cls");
    }

    if (hits == length)
    {
        cout << "You win! The secret word was: " << word << endl;
    }
    else
    {
        cout << "You lose! The secret word was: " << word << endl;
    }

    return 0;
}
