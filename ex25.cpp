// Functions

// Returning multiple values

# include <iostream>

using namespace std;

// The return statement only allows you to return 1 value. Passing output variables by reference overcomes this limitation.

int divide(int   numerator, int denominator, int   &remainder) { 
remainder = numerator % denominator; 
  return numerator / denominator; 
} 
int main
() { 
int num = 14; 
int den = 4; 
int rem; 
int result = divide(num, den, rem); 
cout << result << "*" << den << "+"   << rem << "=" << num << endl; 
// 3*4+2=14
} 
