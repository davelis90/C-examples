// Arrays and strings

// Strings

#include <iostream>
#include <cstring>

using namespace std;

int main() {
 
  char fragment1[] = "I'm a s";
  char fragment2[] = "tring!";
  char fragment3[20];
  char finalString[20] = "";
 
  strcpy(fragment3, fragment1); // copy fragment1 into fragment3
  cout << fragment3 << endl;
 
  strcat(finalString, fragment3); // concatenate fragment3 onto finalString
  cout << finalString << endl;
 
  strcat(finalString, fragment2);

   cout << finalString << endl;

  return 0;
}
