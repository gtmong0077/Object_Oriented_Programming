#ifndef LIST_H
#define LIST_H
#include <iostream>
#include <cassert>

using namespace std;

template <typename T>
struct Node{
    T data;
    Node <T>* next;
};

template <typename T>
class List{
    private:
        Node <T>* begin;
        int count;
        Node <T>* makeNode(const T& value);
    public:
        List();
        ~List();
        void insert(int pos,const T& value);
        void print() const;
        void reversePrint() const;
};

#endif // LIST_H