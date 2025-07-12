#include <iostream>
using namespace std;
int main()
{
    // What is pointer ? -----> data type which holds the adress of otherdata types
    
    int a = 3;
    int* b = &a;

    // & -----> Adress of operator 
    cout <<" The address of a is " << &a << endl;
    cout <<" The address of a is " << b << endl;

    // * -----> Dereferance operator
    cout <<" The value ar address of b is " << *b << endl; 

    // pointer to pointer 
    int** c = &b;
    cout <<" The address of b is " << &b << endl;
    cout <<" The address of b is " << c << endl;
    cout <<" The value at address of b is " << *c << endl;
    cout <<" The value at address value_at(value_at(c)) is " << **c << endl;

    cout << endl;

    return 0;
}