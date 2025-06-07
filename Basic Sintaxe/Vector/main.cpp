#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> number1;
  vector<int> number2;
  int size1, size2, i;

  number1.push_back(10);
  number1.push_back(20);
  number1.push_back(30);
  number1.push_back(40);

  number2.push_back(5);
  number2.push_back(6);
  number2.push_back(7);
  number2.push_back(8);

  size1 = number1.size();
  size2 = number2.size();

  cout << "1-Vector size is: " << size1 << endl;
  cout << "2-Vector size is: " << size2 << endl;

  cout << endl;

  for (i = 0; i < size2; i++)
  {
    cout << i + 1 << ". Vector value: " << number1[i] << endl;
  };

  number1[0] = 1;
  number1[1] = 2;
  number1[2] = 3;
  number1[3] = 4;

  cout << endl;

  for (i = 0; i < size1; i++)
  {
    cout << i + 1 << ". 1-Vector value: " << number1[i] << endl;
  };

  for (i = 0; i < size2; i++)
  {
    cout << i + 5 << ". 2-Vector value: " << number2[i] << endl;
  };

  cout << endl;

  cout << "1-Vector First Number : " << number1.front() << endl;
  cout << "1-Vector Middle Number : " << number1.at(size1 / 2) << endl;
  cout << "1-Vector Last Number : " << number1.back() << endl;
  cout << "2-Vector First Number : " << number2.front() << endl;
  cout << "2-Vector Middle Number : " << number2.at(size2 / 2) << endl;
  cout << "2-Vector Last Number: " << number2.back() << endl;

  cout << endl;

  number1.swap(number2);

  for (i = 0; i < size2; i++)
  {
    cout << i + 1 << ". 2-Vector value: " << number2[i] << endl;
  };

  for (i = 0; i < size1; i++)
  {
    cout << i + 5 << ". 1-Vector value: " << number1[i] << endl;
  };

  cout << endl;

  cout << "2-Vector First Number : " << number2.front() << endl;
  cout << "2-Vector Middle Number : " << number2.at(size2 / 2) << endl;
  cout << "2-Vector Last Number: " << number2.back() << endl;
  cout << "1-Vector First Number : " << number1.front() << endl;
  cout << "1-Vector Middle Number : " << number1.at(size1 / 2) << endl;
  cout << "1-Vector Last Number : " << number1.back() << endl;

  cout << endl;

  number1.insert(number1.begin(), 1);
  number1.insert(number1.begin() + 1, 2);
  number1.insert(number1.begin() + 2, 3);
  number1.insert(number1.begin() + 3, 4);

  number2.insert(number2.begin(), 5);
  number2.insert(number2.begin() + 1, 6);
  number2.insert(number2.begin() + 2, 7);
  number2.insert(number2.begin() + 3, 8);

  for (i = 0; i < size1; i++)
  {
    cout << i + 1 << ". 1-Vector value: " << number1[i] << endl;
  };

  for (i = 0; i < size2; i++)
  {
    cout << i + 5 << ". 2-Vector value: " << number2[i] << endl;
  };

  return 0;
}