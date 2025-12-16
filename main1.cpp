#include "List.cpp"
#include <string>

int main(){
    //Instantiation of a list object
    List<string> list;
    //Inserting six nodes in the list
    list.insert(0,"apple");
    list.insert(1,"banana");
    list.insert(2,"cherry");
    list.insert(3,"date");
    list.insert(4,"blueberry");
    list.insert(5,"elderberry");

    //Printing the values of nodes
    cout<<"Printing the list"<<endl;
    list.print();
    //rinting the values of three nodes
    cout << "Getting data in some nodes" << endl;
    cout << list.get (0) << endl;
    cout << list.get (3) << endl;
    cout << list.get (5) << endl;
    // Erasing three nodes from th
    cout << "Erasing some nodes and printing after erasures" << endl ;
    list.erase (0);
    list.erase (3);
    list.print ();
    // Printing the 
    cout<<"Size of the list: "<<list.size()<<endl;
    return 0;
}
