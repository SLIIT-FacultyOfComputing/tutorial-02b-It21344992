/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>
using namespace std;

long Factorial(int no)
{  int i;
  
  long double total = 1.0;
  
  for(i=1; i<=no; i++)
    {
      total *= i;
    }
  return total;
  
}

long nCr(int n, int r)
{
  return Factorial(n)/(Factorial(r) * Factorial(n-r));  
}

int main() {
  
  int N,R;
  
  cout << "Enter a value for n :";
  cin >> N;
  cout << "Enter a value for r:";
  cin >> R;

  nCr(N,R);
  
  cout << "nCr = ";
  cout << nCr(N,R);
  
}
