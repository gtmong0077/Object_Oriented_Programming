#include <iostream>

using namespace std;

void print1(int value){
    cout<<value<<endl;
}

void print2(int value){
    cout<<value*2<<endl;
}

void fun(int x,void(*f)(int)){
    f(x);
}

int main(){
    fun(10,print1);
    fun(20,print2);
    return 0;
}