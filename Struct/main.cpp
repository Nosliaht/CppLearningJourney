#include <bits/stdc++.h>
using namespace std;

struct Car
{
    string name;
    string color;
    int potency;
    int max_Velocity;
};

int main()
{
    Car Nissan, Ford;
    Nissan.name = "350z";
    Nissan.color = "Blue";
    Nissan.potency = 312;
    Nissan.max_Velocity = 155;

    Ford.name = "Mustang";
    Ford.color = "Black";
    Ford.potency = 815;
    Ford.max_Velocity = 173;

    cout << "Car name: " << Nissan.name << "\n";
    cout << "Car color: " << Nissan.color << "\n";
    cout << "Car potency: " << Nissan.potency << "/Horses" << "\n";
    cout << "Car max velocity: " << Nissan.max_Velocity << "/MPH" << "\n\n";

    cout << "Car name: " << Ford.name << "\n";
    cout << "Car color: " << Ford.color << "\n";
    cout << "Car potency: " << Ford.potency << "/Horses" << "\n";
    cout << "Car max velocity: " << Ford.max_Velocity << "/MPH" << "\n\n";

    return 0;
}