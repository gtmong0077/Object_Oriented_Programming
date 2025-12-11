#include <iostream>
using namespace std;
// Definition of the print template function
template <typename T, int N>
void print (T (&array) [N])
{
for (int i = 0; i < N ; i++)
{
cout << array [i] << " ";
}
cout << endl;
}

int main (){
// Creation of two arrays
int arr1 [4] = {7, 3, 5, 1};
double arr2 [3] = {7.5, 6.1, 4.6};
// Calling template function
print (arr1);
print (arr2);
return 0;
}