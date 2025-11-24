#include <string>
#include <iostream>
using namespace std;
int main ( )
{
// Constructing a default object
string strg;
// Creating a string made of a single line
cout << "Enter a line of characters: " << endl;
getline (cin, strg);
cout << strg << endl << endl;
// Creating a string made of multiple lines
cout << "Enter lines of characters ended with $: " << endl;
getline (cin, strg, '$');
cout << strg;
return 0;
}