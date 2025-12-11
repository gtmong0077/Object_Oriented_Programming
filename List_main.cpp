#include <iostream>
#include <string>
#include "List_2.cpp"

using namespace std;

// Extend the List class: Implement [print, reversePrint] member functions
int main()
{
    // Instantiation of a List object
    List <int> list1;
    // Insert six nodes in the list
    list1.insert(0, 17);
    list1.insert(1, 23);
    list1.insert(2, 11);
    list1.insert(3, 18);
    // Printing the value of list in forward direction
    cout << "Printing the list1" << endl;
    list1.print();
    cout << endl << endl;
    // Printing the value of list in reverse direction
    cout << "Printing the list1 in reverse order" << endl;
    list1.reversePrint();
    cout << endl << endl;
    // Instantiation of a List object
    List <string> list2;
    // Insert seven nodes in the list
    list2.insert(0, "Monday");
    list2.insert(1, "Tuesday");
    list2.insert(2, "Wednesday");
    list2.insert(3, "Thursday");
    list2.insert(4, "Friday");
    list2.insert(5, "Saturday");
    list2.insert(6, "Sunday");
    // Printing the value of list in forward direction
    cout << "Printing the list2" << endl;
    list2.print();
    cout << endl << endl;
    // Printing the value of list in reverse direction
    cout << "Printing the list2 in reverse order" << endl;
    list2.reversePrint();
    cout << endl << endl;
    printf("\n Press Any Key to Terminate ...\n");
    getchar();
    return 0;
}