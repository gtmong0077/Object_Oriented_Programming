#ifndef LIST_2CPP
#define LIST_2CPP
#include <vector>
#include "List_2.h"

using namespace std;

template <typename T>
List<T>::List():begin(0),count(0){
}

template <typename T>
List<T>::~List(){}

template <typename T>
void List<T>::insert(int pos,const T& value){
    if(pos < 0 || pos > count){
        cout<< "Position is out of range" << endl;
        return;
    }
    Node<T>* add =makeNode(value);
    if (pos == 0){
        add -> next = begin;
        begin = add;
    }
    else{
        Node<T>* cur=begin;
        for(int i=0;i<pos-1;i++){
            cur=cur->next;
        }
        add->next=cur->next;
        cur->next=add;
    } 
    count++;
}

// MakeNode member function (private)
template <typename T>
Node <T>* List <T> :: makeNode (const T& value)
{
    Node <T>* temp = new Node <T>;
    temp -> data = value;
    temp -> next = 0;
    return temp;
}

template <typename T>
void List<T>::print() const{
    Node<T>* cur=begin;
    while(cur!=0){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
}

template <typename T>
void List<T>::reversePrint() const{
    vector<T> temp;
    Node<T>* cur=begin;
    
    while(cur!=0){
        temp.push_back(cur->data);
        cur=cur->next;
    }

    for(int i=temp.size()-1;i>=0;i--){
        cout<<temp[i]<<" ";
    }
}

#endif
