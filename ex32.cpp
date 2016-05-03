// Classes

# include <iostream>

using namespace std;

class Point {
public:
	double x,y;
};

class Vector {
public:
	Point start, end; // Fields can be classes
};

int main() {
	Vector vec1, vec2; // Instances of Vector
	vec1.start.x = 3.0; // Accessing fields
	vec1.start.y = 4.0;
	vec1.end.x = 5.0;
	vec1.end.y = 6.0;
	vec2.start = vec1.start; // assigning 1 instance to another copies all fields
	cout << vec1.end.x << endl;
}
