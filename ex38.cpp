// Classes


// Constructors

# include <iostream>
# include <string>

using namespace std;

// Why make a copy constructor?

class MITstudent {
public:
	int studentID;
	//char *name; // not working???
	string name;

	MITstudent() {
		studentID = 0;
		name = "";
	} 
	// not needed for this (??)
	MITstudent(MITstudent &o) { // copy constructor
		studentID = o.studentID;
		//name = strdup(o.name); // ???
		name = o.name;
	}
};

int main() {
	MITstudent student1;
	student1.studentID = 98;
	char n[] = "foo";
	student1.name = n;
	MITstudent student2 = student1;
	student2.name[0] = 'b';
	cout << student1.name << endl; //boo
// This is supposed to change student 1's name as well, but it works fine !?!? The solution is to make a copy constructor, so that changing student 2's name doesn't affect student 1's name! (still no problem before ???)
	cout << student2.name << endl; //boo
}
