// Arrays and strings

// String libraries

// cctype (ctype.h): character handling, cstdio (stdio.h): input/output operations, cstdlib (stdlib.h): general utilities, cstring (string.h): string manipulation 

#include <iostream>
#include <cctype>

using namespace std;

int main() {
 
char messyString[] = "t6H0I9s6.iS.999a9.STRING";

 
char current = messyString[0];
 
for(int i = 0; current != '\0'; current = messyString[++i]) {
 
  if(isalpha(current))
 
    cout << (char)(isupper(current) ? tolower(current) : current);
// if the condition isupper(current) (the char is an uppercase) is correct then: tolower(current) (turn to lowercase), otherwise: current (leave it unchanged)
  else if(ispunct(current))
 
    cout << ' ';
} 
cout << endl;
}
