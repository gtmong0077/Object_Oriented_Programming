#include <iostream>
using namespace std;
// Function to find the smaller between two characters
char smaller (char first, char second)
{
    if (first < second){
        return first;
    }
    return second;
}
// Function to find the smaller between two integers
int smaller (int first, int second)
{
    if (first < second){
        return first;
    }
    return second;
}
// Function to find the smaller between two doubles
double smaller (double first, double second)
{
    if (first < second){
        return first;
    }
    return second;
}

int main ()
{
    cout << "Smaller of ’a’ and ’B’: " << smaller ('a', 'B')<< endl;
    cout << "Smaller of 12 and 15: " << smaller (12, 15)<< endl;
    cout << "Smaller of 44.2 and 33.1: " << smaller (44.2,33.1) << endl;
    return 0;
}

