// Overloads and templates
// Function templates

// result will be a variable of the same type as the parameters a and b, and as the type returned by the function

#include <iostream>

using namespace std;

template <class T>
T sum (T a, T b)
{
  T result;
  result = a + b;
  return result;
}

template <class T, class U>
bool are_equal (T a, U b)
{
  return (a==b);
}


// Non-type template arguments

template <class T, int N>
T fixed_multiply (T val)
{
  return val * N;
}


int main () {
  int i=5, j=6, k;
  double f=2.0, g=0.5, h;
  k=sum/*<int>*/(i,j); // the type can be deduced from the input arguements
  h=sum/*<double>*/(f,g);
  cout << k << '\n';
  cout << h << '\n';


// this example uses automatic template parameter deduction in the call to are_equal

  if (are_equal(10,10.0))
    cout << "x and y are equal\n";
  else
    cout << "x and y are not equal\n";

// The two calls to fixed_multiply in main essentially call two versions of the function: one that always multiplies by two, and one that always multiplies by three.

  std::cout << fixed_multiply<int,2>(10) << '\n';
  std::cout << fixed_multiply<int,3>(10) << '\n';

  return 0;
}
