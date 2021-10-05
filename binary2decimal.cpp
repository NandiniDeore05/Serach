#include <iostream>
#include <cmath>
//c++ program to convert a binary number to decimal
//A binary number is a number expressed in the base-2 numeral system or binary numeral system, a method of mathematical expression which uses only two symbols: typically "0" and "1".
//decimals are one of the types of numbers, which has a whole number and the fractional part separated by a decimal point.
//contributed by subho004

using namespace std;

// function prototype
int convert(long long);

int main() {
  long long n;
  cout << "Enter a binary number: ";
  cin >> n;
  cout << n << " in binary = " << convert(n) << " in decimal";
  return 0;
}

// function definition
int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}