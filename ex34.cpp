// Classes

# include <iostream>

using namespace std;

class Point { public: double x,y; };

class Vector {
public:
	Point start,end;
};

void offsetVector (Vector &v, double offsetx, double offsety) { 
// pass classes by reference if they need to be modified!!!
	v.start.x += offsetx;
	v.end.x += offsetx;
	v.start.y += offsety;
	v.end.y += offsety;
}

void printVector(Vector v) {
// pass to value if you don't need to modify the class
	cout << "(" << v.start.x << "," << v.start.y << ") -> (" << v.end.x << "," << v.end.y << ")" << endl;
}

int main() {
	Vector vec;
	vec.start.x = 1.2; vec.end.x = 2.0; vec.start.y = 0.4; vec.end.y = 1.6;
	offsetVector(vec,1.0,1.5); // these 2 functions could be methods: functions which are part of a class, check ex35.cpp!!!
	printVector(vec);
}
