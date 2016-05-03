// Classes


// Constructors (methods that are called when an instance is created: to avoid initialising the fields manually!). They can accept parameters and there can be multiple constructors!

# include <iostream>

using namespace std;

class Point {
public:
	double x,y;
	Point() {
		x = 0.0; y = 0.0;
		cout << "Default constructor" << endl;
	}
	Point(double nx, double ny) {
		x=nx; y=ny; cout << "2-parameter constructor" << endl;
	}
};

int main() {
	Point p; // default contructor
	// p.x is 0.0, p.y is 0.0
	cout << "(" << p.x << "," << p.y << ")" << endl;

	Point q(2.0, 3.0); // 2-parameter constructor
	// q.x is 2.0, q.y is 3.0
	cout << "(" << q.x << "," << q.y << ")" << endl;

	Point r=q; // invoking the copy constructor
	cout << "(" << r.x << "," << r.y << ")" << endl;
}
