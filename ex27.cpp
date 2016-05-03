// Arrays and strings

// Multidimensional arrays


// Note that dimensions must always  be provided when initializing multidimensional arrays, as it  is otherwise impossible for the compiler to determine what the intended element partitioning  is. For the same reason, when multidimensional arrays are specified as arguments to functions, all dimensions but the first must be provided (the first dimension is optional).

#include <iostream>
  using namespace std;

  int main() {

 int twoDimArray[2][4];
 
twoDimArray[0][0] = 6; 
twoDimArray[0][1] = 0;
twoDimArray[0][2] = 9;
twoDimArray[0][3] = 6;
twoDimArray[1][0] = 2;
twoDimArray[1][1] = 0;
twoDimArray[1][2] = 1;
twoDimArray[1][3] = 1;

for(int i = 0; i < 2; i++)
	for(int j = 0; j < 4; j++) {
		cout << twoDimArray[i][j];
		cout << endl; 
	}
return 0;
}
