#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    vector <int> vec(10);
    vector <int> :: iterator iter;
    vector <int> :: reverse_iterator rIter;

    for(int i=0;i<10;i++){
        vec.at(i)=i*i;
    }
    cout<<"Regular navigation: "<<endl;
    for(iter=vec.begin();iter!=vec.end();iter++){
        cout<<setw(4)<<*iter;
    }
    cout<<endl;
    cout<<"Reverse navigation: "<<endl;
    for(rIter=vec.rbegin();rIter!=vec.rend();rIter++){
        cout<<setw(4)<<*rIter;
    }
    cout<<endl;
    return 0;
}