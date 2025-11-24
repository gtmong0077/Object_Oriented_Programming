#include <iostream>
#include <string>

using namespace std;

int findValue (char ch)
{
    return static_cast <int>(ch) - 48; // ASCII code: ‘0’
}

char popFront(string& str){
    int index=0;
    char temp=str[index];
    str.erase(index,1);
    return temp;
}


int main(){
    string input;
    bool IsInvalid = false;
    do{
    cout << "Enter input string: ";
    getline (cin, input);
    IsInvalid = input.find_first_not_of("01") < input.size();
    if (IsInvalid)
        cout << "Error: Invalid input format" << endl;
    } while (IsInvalid);
    int base=2;
    int decimal=0;
    
    while(!input.empty()){
        decimal*=base;
        char ch=popFront(input);
        decimal+=findValue(ch);
    }
    cout<< decimal;
    return 0;

}





