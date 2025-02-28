#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    n1 = 20;
    n2 = 21;

    // cout << "Before Increment: " << n1 << "\n\n";
    // n1 = n1 + 1;
    // cout << "After Increment: " << n1 << "\n\n";

    // cout << "Before Decrement: " << n2 << "\n\n";
    // n2 = n2 - n1;
    // cout << "After Decrement: " << n2 << "\n\n";

    // cout << "Before Increment: " << n1 << "\n\n";
    // n1 += 1;
    // cout << "After Increment: " << n1 << "\n\n";

    // cout << "Before Increment: " << n2 << "\n\n";
    // n2 -= n1;
    // cout << "After Increment: " << n2 << "\n\n";

    cout << "N1: Before Increment: " << n1 << "\n";
    n1++;
    cout << "N1: After  Increment: " << n1 << "\n\n";

    cout << "N2: Before Increment: " << n2 << "\n";
    n2--;
    cout << "N2: After  Increment: " << n2 << "\n\n";

    return 0;
}