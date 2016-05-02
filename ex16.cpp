// Functions
#include <iostream>
using namespace std;

int addition (int a, int b)
{
  int r;
  r=a+b;
  return r;
}

int subtraction (int a, int b)
{
  int r;
  r=a-b;
  return r;
}

void printmessage ()
{
  cout << "Hello bali!\n";
}

int main ()
{
  int z;
  z = addition (5,3);
  cout << "The result is " << z << endl;

  int x=5, y=3;
  z = subtraction (7,2);
  cout << "The first result is " << z << '\n';
  cout << "The second result is " << subtraction (7,2) << '\n';
  cout << "The third result is " << subtraction (x,y) << '\n';
  z= 4 + subtraction (x,y);
  cout << "The fourth result is " << z << '\n';
  printmessage ();
}
