// statements and flow control
// break, continue, goto

// break
#include <iostream>
using namespace std;

int main ()
{
  for (int n=10; n>0; n--)
  {
    cout << n << ", ";
    if (n==3)
    {
      cout << "countdown aborted!\n";
      break;
    }
  }

// continue (skip the rest of the loop in the current iteration)

for (int n=10; n>0; n--) {
    if (n==5) continue; // skip number 5
    cout << n << ", ";
  }
  cout << "liftoff!\n";


// goto

int n=10;
mylabel:
  cout << n << ", ";
  n--;
  if (n>0) goto mylabel;
  cout << "liftoff!\n";

}
