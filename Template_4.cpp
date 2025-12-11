#include <iostream>
using namespace std;
// Template function with two parameters
template <typename T>
T smallest (const T& first, const T& second)
{
if (first < second)
{
return first;
}
return second;
}
// Template function with three parameters
template <typename T>
T smallest (const T& first, const T& second, const T& third)
{
return smallest (smallest (first, second), third);
}

int main ( )
{
// Calling the overloaded version with three integers
cout << "Smallest of 17, 12, and 27 is ";
cout << smallest (17, 12, 27) << endl;
// Calling the overloaded version with three doubles
cout << "Smallest of 8.5, 4.1, and 19.75 is ";
cout << smallest (8.5, 4.1, 19.75) << endl;
return 0;
}