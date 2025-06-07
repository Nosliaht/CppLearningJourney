#include <iostream>
using namespace std;

int main()
{
    string username = "DevMestick";
    string password = "DevMestickPass";

    string get_username;
    string get_password;

    cout << "Enter Your Username: ";
    getline(cin, get_username);
    cout << "Enter Your Passowrd: ";
    getline(cin, get_password);

    if (get_username == " " || get_password == "")
    {
        cout << "Empty Username or Password";
    }
    else if (get_username != username || get_password != password)
    {
        cout << "Invalid Username or Password";
    }
    else if (get_username == username && get_password == password)
    {
        cout << "Welcome to Your Accout";
    }

    return 0;
}