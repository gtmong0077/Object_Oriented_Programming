#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool isEven(int value){
    return value % 2 == 0;
}

void timesTwo(int &value){
    value *= 2;
}

void print(int value){
    cout << value << " ";
}

int main()
{
// Instantiation of a vector of integers
vector <int> vec ;
// Pushing ten values into the vector
vec.push_back(17);
vec.push_back(10);
vec.push_back(13);
vec.push_back(13);
vec.push_back(18);
vec.push_back(15);
vec.push_back(17);
vec.push_back(13);
vec.push_back(13);
vec.push_back(18);
// Printing original values
cout << "Original values in vector" << endl;
for_each(vec.begin(), vec.end(), print);
cout << endl << endl;
// Counting number of 10’s
cout << "Count of 10’s: ";
cout << count(vec.begin(), vec.end(), 10);
cout << endl << endl;
// Counting the even values
cout << "Count of even values: ";
cout << count_if( vec.begin(), vec.end(), isEven );
cout << endl << endl;
// Doubling each value and printing vector
cout << "Values after multiplying by 2" << endl;
for_each(vec.begin(), vec.end(), timesTwo);
for_each(vec.begin(), vec.end(), print);
return 0;
} 