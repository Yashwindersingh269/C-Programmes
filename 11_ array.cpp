#include <iostream>
using namespace std;
int main()
{
    // Arrays Example
    int marks[] = {23, 45, 56, 89};
    // int mathMarks[4];
    // mathMarks[0] = 2278;
    // mathMarks[1] = 738;
    // mathMarks[2] = 378;
    // mathMarks[3] = 578;

    // cout <<" These are math Marks " << endl;

    // cout << mathMarks[0] << endl;
    // cout << mathMarks[1] << endl;
    // cout << mathMarks[2] << endl;
    // cout << mathMarks[3] << endl;

    // you can change an array value 
    // marks[2] = 69;
    // cout <<" These are marks " << endl;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    // for ( int i = 0; i < 4; i++)
    // {
    //     cout <<" The value of marks " << i <<" is " << marks[i] << endl;
    // }



    // Pointers and array
    int* p = marks;
    cout <<*(p++) << endl;
    cout <<*(++p) << endl;
    // cout <<" The value of marks[0] is " << *p << endl;    
    // cout <<" The value of marks[1] is " << *(p+1) << endl;
    // cout <<" The value of marks[3] is " << *(p+2) << endl;
    // cout <<" The value of marks[0] is " << *(p+3) << endl;
    cout << endl;

    return 0;
}