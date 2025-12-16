#include <map>
#include <iostream>
#include <iomanip>
#include <utility>
using namespace std;

int main(){
    map<string,int> scores;
    map<string,int>::iterator iter;
    scores["Kim"]=90;
    scores["Lee"]=85;
    scores["Park"]=95;
    scores["Choi"]=80;
    scores["Jung"]=70;

    cout<<"Student Scores"<<endl;
    cout<<"----------------"<<endl;
    for(iter=scores.begin();iter!=scores.end();iter++){
        cout<<setw(10)<<left<<iter->first<<" ";
        cout<<setw(4)<<right<<iter->second<<endl;
    }
}