// Arrays and strings

#include <iostream>
 
using namespace std;

int sum(const int array[], const int length) {
	
	long sum = 0;

	for(int i = 0; i < length; sum += array[i++]); 
	return sum;
}

int main() {

 int arr1[4];
 
 cout << "Please enter 4 integers:" << endl;
// Initialisation of an array
 for(int i = 0; i < 4; i++)
	cin >> arr1[i];

 cout << "Values in array are now:";  

 for(int i = 0; i < 4; i++)
	cout << " "  << arr1[i];  
 
 cout << endl; 

 int arr2[] = {1, 2, 3, 4, 5, 6, 7};

 cout << "Sum: " << sum(arr2, 7) << endl;
 // It is important to note that arrays are passed by reference
 // and so any changes made to the  array within the function will be observed in the calling scope. 
 
} 
