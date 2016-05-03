// Classes

# include <iostream>
# include <string>

using namespace std;

class MITstudent {
public:
	//char *name; // this is not working ???????
	string name;
	int studentID;
};

int main() {
	MITstudent student1;
	MITstudent student2;
	student1.name = "Alex"; 
	student1.studentID = 1234;
	student2.name = "Mike";
	student2.studentID = 2345;
	cout << "student1's name is " << student1.name << endl;
	cout << "student1's Id is " << student1.studentID << endl;
	cout << "student2's name is " << student2.name << endl;
	cout << "student2's Id is " << student2.studentID << endl;
}
