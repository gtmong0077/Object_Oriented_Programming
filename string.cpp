#include <cstring>
#include <iostream>
using namespace std;
int main ( )
{
// Copy the whole str2 to str1. String str1 is erased.
char str1 [] = "This is the first string."; // 25 + ’\0’ = 26
char str2 [] = "This is the second string!!!"; // 28 + ’\0’ = 29
strcpy (str1, str2);
cout << "str1: " << str1 << endl;
// Copy part of str4 to str3. str3 is partially erased.
char str3 [] = "abcdefghijk."; // 12 + ’\0’ = 13
const char* str4 = "ABCDEFGHIJK"; // 11 + ’\0’ = 12
strncpy (str3, str4, 3);
cout << "str3: " << str3 << endl;
return 0;
}