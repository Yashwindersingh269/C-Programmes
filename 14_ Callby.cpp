#include <iostream>
using namespace std;
int sum(int a, int b){
    int c = a + b;
    return c;
}
// This will not swap a and b 
void swap( int a, int b){ // temp a b
    int temp = a;        // 4    4 5
    a = b;              // 4    5 5
    b = temp;  
}         // 4    5 4

// Call by reference using pointers 
void swapPointer( int* a, int* b){// temp a b
    int temp = *a;         // 4    4 5
    *a = *b;              // 4    5 5
    *b = temp;           // 4    5 4
}

// Call by refrence using C++ refrence variables
// void swapRefrencevar( int &a, int &b){// temp a b
//     int temp = a;         // 4    4 5
//     a = b;              // 4    5 5
//     b = temp;           // 4    5 4
// }
// int main()
// {
//     int a = 4, b = 5;
//     // cout <<" The sum of 4 and 5 is " << sum(4,5);
//     cout <<" The value of a is " << a <<" and the value of b is " << b << endl;
//     // swap(a,b); // This will not swap a and b 
//     // swapPointer(&a , &b);  // This will swap a and b using pointer refrence 
//     swapRefrencevar(a, b);  // This will swap a and b using  refrence variable 
//     cout <<" The value of a is " << a <<" and the value of b is " << b << endl;
//     return 0;



    // Call by refrence using C++ refrence variables
int & swapRefrencevar( int &a, int &b){// temp a b
    int temp = a;         // 4    4 5
    a = b;              // 4    5 5
    b = temp;
    return a;   
}
int main()
{
    int a = 4, b = 5;
    // cout <<" The sum of 4 and 5 is " << sum(4,5);
    cout <<" The value of a is " << a <<" and the value of b is " << b << endl;
    // swap(a,b); // This will not swap a and b 
    // swapPointer(&a , &b);  // This will swap a and b using pointer refrence 
    swapRefrencevar(a, b) = 69;  // This will swap a and b using  refrence variable 
    cout <<" The value of a is " << a <<" and the value of b is " << b << endl;
    return 0;

    cout << endl;
    return 0;
}