#include <iostream>
using namespace std;
int n1, n2; // Global Variables - Global Access
int main()
{
    int n3, n4, res1, res2; // Local Variables - Local access Only
    n1 = 10;
    n2 = 11;
    n3 = 12;
    n4 = 13;
    res1 = n1 / n2;
    res2 = n3 % n4;
    cout << "A divisao de n1 por n2 e: " << res1 << endl;
    cout << "O resto de divisao de n3 e n4 e: " << res2 << endl;
    return 0;
}