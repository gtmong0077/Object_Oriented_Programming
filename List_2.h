#ifndef LIST_H
#define LIST_H
#include <iostream>
#include <cassert>
#include <iomanip>

using namespace std;

// === [테스트 케이스 1] 사용자 정의 복합 객체 (Point) ===
struct Point {
    double x;
    double y;
};

ostream& operator<<(std::ostream& os, const Point& p);

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