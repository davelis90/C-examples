// Classes


// Constructors

# include <iostream>

using namespace std;

// We can define our own copy constructor

class Point {
public:
	double x,y;

	Point(double nx, double ny) {
	x=nx; y=ny; cout << "2-parameter constructor" << endl;
	}
	
	Point(Point &o) {
		x = o.x; y=o.y; cout << "custom copy constructor" << endl;
}
};

int main() {
	Point q(1.0, 2.0); // 2-parameter constructor
	Point r=q; // custom copy constructor
	// r.x is 1, r.y is 2
}
