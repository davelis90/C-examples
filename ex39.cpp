// Classes/Structs

// Access Modifiers

/* The class is private by default meaning

class Point {
private: (optional!)
	double x,y;
}; */

/* Structs are the same as classes, with the only difference being that the default access modifier is public! (in classes private)

struct Point {
public: (optional!)
	double x,y;
}; */

# include <iostream>

using namespace std;

class Point {
private: // cannot be accessed from anywhere like when public! only 		    within the class!!! 
	 // We use getters to allow read-only access to private fields
	double x,y;
public:
	Point(double nx, double ny) {
		x = nx; y = ny;
	}
	// getters
	double getX() { return x;}
	double getY() { return y;}
};

int main() {
	Point p(2.0,3.0);
	//p.x = 5.0; // this is NOT allowed (private)!!!
	// Solution:
	cout << p.getX() << endl; // allowed!
}
