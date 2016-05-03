// Classes

# include <iostream>

/* In case we want to define the functions not in the "right" order, we declare the function prototypes first and later we define the function implementation like this: 

class Point {
public: 
	double x,y; 
	void offset(double offsetx, double offsety);
	void print();
}

and later:

void Point::offset(double offsetx, double offsety) {
// indicates which class' method is being implemented!!
		x += offsetx; y += offsety;
}

void Point::print() {
	cout << "(" << x << "," << y << ")";
}
*/

using namespace std;

class Point {
public: 
	double x,y; 
	void offset(double offsetx, double offsety) {
		x += offsetx; y += offsety;
}

	void print() {
	cout << "(" << x << "," << y << ")";
}

};

class Vector {
public:
	Point start,end;

	void offset (double offsetx, double offsety) { 
		start.offset(offsetx,offsety);
		end.offset(offsetx,offsety); // methods of fields can be called!!
	}

	void print() {
		start.print();
		cout << " -> ";
		end.print();
		cout << endl;
	}
};

int main() {
	Vector vec;
	vec.start.x = 1.2; vec.end.x = 2.0; vec.start.y = 0.4; vec.end.y = 1.6;
	vec.offset(1.0,1.5); 
	vec.print();
}
