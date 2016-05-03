// Pointers

// Check lecture 5 from MIT's tutorial for more info and ex17.cpp!!!

// int *ptr = &x; // int *ptr declares the pointer to an integer value, which we are initialising to the address of x.

# include <iostream>
using namespace std;

void squareByPtr( int *numPtr ) {
	*numPtr = *numPtr * *numPtr;
}

int main() {
	int x = 5;
	squareByPtr(&x);
	cout << x << endl; // prints 25
}
