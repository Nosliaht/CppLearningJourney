#include <bits/stdc++.h>
using namespace std;

struct Car
{
    string name;
    string color;
    int potency;
    int max_Velocity;
    int velocity;

    void insert(string stName, string stColor, int stPotency, int stMax_Velocity)
    {
        name = stName;
        color = stColor;
        potency = stPotency;
        max_Velocity = stMax_Velocity;
        velocity = 0;
    }

    void print()
    {
        cout << "\nCar name: " << name << "\n";
        cout << "Car color: " << color << "\n";
        cout << "Car potency: " << potency << "/Horses" << "\n";
        cout << "Current car speed: " << velocity << "/MPH" << "\n";
        cout << "Car max velocity: " << max_Velocity << "/MPH" << "\n";
    }

    void changeVelocity(int cVelocity)
    {
        velocity = cVelocity;
        if (velocity > max_Velocity)
        {
            velocity = max_Velocity;
        }

        if (velocity < 0)
        {
            velocity = 0;
        }
    }
};

int main()
{

    Car *cars = new Car[2];

    Car Ford, Nissan;

    cars[0] = Ford;
    cars[1] = Nissan;

    cars[0].insert("Mustang", "Black", 826, 202);
    cars[1].insert("350z", "Red", 280, 155);

    for (int i = 0; i < 2; i++)
    {
        cars[i].print();
    }

    return 0;
}
