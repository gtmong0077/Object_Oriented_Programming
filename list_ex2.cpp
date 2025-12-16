#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> lst;
    list<int>::iterator iter1;
    list<int>::reverse_iterator iter2;

    for(int i=0;i<10;i++){
        lst.push_back(i*10);
    }
    cout<<"Printing 40 followed by 20"<<endl;
    iter1=lst.begin();
    cout<<*iter1<<endl;
    iter1++;
    iter1++;
    iter1++;
    iter1++;
    cout<<*iter1<<endl;
    iter1--;
    iter1--;
    cout<<*iter1<<endl;
    cout<<"Printing 50 followed by 70"<<endl;
    iter2=lst.rbegin();
    cout<<*iter2<<endl;
    iter2++;
    iter2++;
    iter2++;
    iter2++;
    cout<<*iter2<<endl;
    iter2--;
    iter2--;
    cout<<*iter2<<endl;
    return 0;
}