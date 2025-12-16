#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void print(int value){
    cout << value << " ";
}

int main(){
    vector<int> vec;
    vec.push_back(24);
    vec.push_back(42);
    vec.push_back(73);
    
    for_each(vec.begin(), vec.end(), print);

    return 0;
}