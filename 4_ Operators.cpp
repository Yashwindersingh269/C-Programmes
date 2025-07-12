// There are two types of header file:
// 1. System header file: It comes with the compiler 
// 2. User defined header file: It is defined by the programmer 
// #include "thsi.h " ---> This will produce an error if this.h is not present in the reposatory;
#include <iostream>
using namespace std;
int main()
{
    int a=5, b=4;
    cout <<" Operator in C++: " << endl;
    cout <<" Following are the types of operators in C++: " << endl;

    // Arithematic Operators
    cout <<" The value of a + b is " << a+b << endl;
    cout <<" The value of a - b is " << a-b << endl;
    cout <<" The value of a * b is " << a*b << endl;
    cout <<" The value of a / b is " << a/b << endl;
    cout <<" The value of a % b is " << a%b << endl;
    cout <<" The value of a++ is " << a++ << endl;
    cout <<" The value of a-- is " << a-- << endl;
    cout <<" The value of ++a is " << ++a << endl;
    cout <<" The value of --a is " << --a << endl;

    // Assignment Operators
    // int a=3, b=9;
    // char d = 'd';


    // Comparison Operator
     cout <<" Following are the comparison operators in C++ " << endl;
     cout <<" The value of a == b is " << (a==b) << endl;
     cout <<" The value of a != b is " << (a!=b) << endl;
     cout <<" The value of a > b is " << (a>b) << endl;
     cout <<" The value of a < b is " << (a<b) << endl;
     cout <<" The value of a <= b is " << (a<=b) << endl;
     cout <<" The value of a >= b is " << (a>=b) << endl;


    // Logical Operator
    cout <<" Following are the logical operators in C++ " << endl;
    cout <<" The value of this logical and operator ((a==b) && (a<b)) is " << ((a==b) && (a<b))<< endl;
    cout <<" The value of this logical or operator ((a==b) || (a<b)) is " << ((a==b) || (a<b))<< endl;
    cout <<" The value of this logical not operator (!(a==b) ) is " << (!(a==b))<< endl;
    



    cout << endl;

    return 0;

}