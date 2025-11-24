#include <iostream>
#include <string>

using namespace std;

char findChar(int digit){
    return char (digit + '0');
}
void pushFront(string& str,char c){
    string temp(1,c);
    str.insert(0,temp);
}

int main(){
    int base=2;
    int decimal;
    cin>> decimal;
    string str;
    while(decimal>0){
        int value=decimal%base;
        char ch=findChar(value);
        pushFront(str,ch);
        decimal /=base;
    }
    cout<< "Binary"<<str;
    return 0;

}


// int main ( )
// {
// // Declaration of variables
// int decimal;
// int base = 2;
// string strg;
// // Input and validation of decimal number
// do
// {
// cout << "Enter a positive decimal: " ;
// cin >> decimal;
// } while (decimal <= 0);
// // Conversion to binary
// while (decimal > 0)
// {
// int digit = decimal % base;
// char ch = findChar (digit);
// pushFront (strg, ch);
// decimal /= base;
// }
// // Outputting binary
// cout << "Binary: " << strg;
// return 0;