#include <bits/stdc++.h>
using namespace std;

int main()
{

    string vehicle = "Car";
    string *vehiclePointer;
    vehiclePointer = &vehicle;

    cout << vehiclePointer << " " << &vehicle << endl;

    *vehiclePointer = "Motorcycle";

    cout << "Vehicle on Pinter: " << *vehiclePointer << " Vehicle: " << vehicle;
    return 0;
}