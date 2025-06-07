#include <bits/stdc++.h>
using namespace std;

int main()
{

    list<int> element, chemical;
    int size;
    list<int>::iterator it;

    chemical.push_front(9);
    chemical.push_front(9);
    chemical.push_front(9);
    chemical.push_front(9);

    size = 10;
    for (int i = 0; i < size; i++)
    {
        element.push_front(i);
    }

    //  it = element.begin();
    //  advance(it, 5);
    //   element.insert(it, 20); Inserts a value at a specific position.

    it = element.begin();
    advance(it, 3);
    element.insert(it, 3);
    element.erase(--it);

    element.merge(chemical);

    // element.clear(); Clear all item from the list

    cout << "Size list: " << element.size() << "\n";

    // element.sort();    Sort the list
    // element.reverse();  Invert the list

    size = element.size();
    for (int i = 0; i < size; i++)
    {
        cout << "Fisrt element: " << element.front() << "\n";
        element.pop_front();
    }

    return 0;
}