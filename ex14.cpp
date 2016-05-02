// statements and flow control
// for
# include <iostream>

using namespace std;

int main()
{
 for (int n=10;n>0;n--) { // it can also be without initialisation or increase or just with increase
	cout << n << ", ";
}
 cout << "liftoff!" << endl;

// range-based for loop (not allowed here!!!!)
/*  string str {"Hello!"};
  for (char c : str)
  {
    std::cout << "[" << c << "]";
  }
  std::cout << '\n'; */
}
