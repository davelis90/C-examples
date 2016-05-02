// statements and flow control
// do-while ( preferred over while when the statement needs to be executed at least once!!!! )

// echo machine

# include <iostream>
# include <string>

using namespace std;

int main()
{
 string str;
 do {
	cout << "Enter text: ";
	getline (cin,str);
	cout << "You entered: " << str << "\n";
} while (str != "goodbye");
}
