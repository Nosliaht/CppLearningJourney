#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{

  // float pi = M_PI;
  // printf("Pi Number: %07.2f", pi);
  // int number = 13;
  // printf("Number: %07d", number);
  // return 0;

  // int number1 = 128;
  // cout << "Number value Hex: " << hex << number1 << "\n";
  // cout << "Number value Hex: " << dec << number << "\n";

  // int number2 = 128;
  // cout << "Number value Hex: " << setbase(16) << number2 << "\n";

  float pi = M_PI;
  cout.precision(3);
  cout << "Pi Value: " << pi << "\n";
  cout.precision(-1);
  cout << "Pi Value: " << pi << "\n";
  cout << "Pi Value: " << std::scientific << pi << "\n\n";

  int number = 30;

  cout << "widht: " << setw(10) << setfill('P') << number << "\n";
}