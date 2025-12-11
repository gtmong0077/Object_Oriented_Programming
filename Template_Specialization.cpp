#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// Template Function
template <typename T>
T smaller (const T& first, const T& second)
{
    if (first < second){
        return first;
    }
    return second;
}
// Specialization of template function
template <>
const char* smaller(const(const char*) & first,const (const char*)& second)
{
    if (strcmp (first, second ) < 0){
        return first;
    }
    return second;
}
int main ( ){
// Calling template with two string objects
string str1 = "Hello";
string str2 = "Hi";
cout<< "Smaller (Hello , Hi): " << smaller (str1, str2) << endl;
//Calling template function with two C-string objects
const char* s1 = "Bye";
const char* s2 = "Bye Bye";
cout << "Smaller (Bye, Bye Bye)" << smaller (s1, s2) << endl;
return 0;
}