#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{

  int age;
  char name[10];

  printf("Enter Your Name: ");
  scanf("%s\n", &name);

  printf("Enter Your Age: ");
  scanf("%d\n", &age);

  printf("Age: %d\nName: %s\n", age, name);

  // d, i = int
  // x, X = hexadecimal
  // u = int sem sinal
  // s = string, char*
  // p = ponteiro

  return 0;
}