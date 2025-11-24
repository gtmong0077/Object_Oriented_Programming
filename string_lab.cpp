// #include <iostream>
// using namespace std;

// int main(){
//     string text;
//     cout<<"Enter a string: ";
//     getline(cin,text);
//     cout<<"Original string: "<<text<<endl;
//     cout<<"Reversed string: "<<text.rfind(,0);
// }
#include <string>
#include <iostream>
using namespace std;
void reverse (string& strg); // Function declaration
int main ( )
{
// Declaration of string object
string strg;
// Input the original object and print it
cout << "Enter a string: ";
getline (cin, strg);
cout << "Original string: " << strg << endl;
// Reverse the object and print it
reverse (strg);
cout << "Reversed string: " << strg;
return 0;
}
void reverse (string& strg){
    string temp (strg);
    int size = strg.size () ;
    for (int i = 0; i < size; i++)
    {
        strg[i]= temp[size - 1];
    }
    
}