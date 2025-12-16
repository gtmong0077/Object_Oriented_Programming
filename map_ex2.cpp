#include <map>
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    map<string,int> freq;
    map<string,int>::iterator iter;
    string word;
    while(cin >> word){ //until ^Z
        ++freq[word];
    }
    for(iter=freq.begin();iter!=freq.end();iter++){
        cout<<left<<setw(10)<<iter->first<<iter->second<<endl;
    }
    return 0;
}