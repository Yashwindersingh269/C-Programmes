#include <iostream>
using namespace std;
int glo = 6;
void sum(){
    int a;
    cout << glo;
}
int main()
{
    int a = 10;
    int b = 15;
    int glo = 9;
    glo = 78;
    float pi = 3.14;
    char c = 'd';
    bool is_true = true; 

    cout <<" The value of a is " << a << endl;

    cout <<" The value of b is " << b << endl;

    cout <<" The value of Pi is " << pi << endl;

    cout <<" The value of C is " << c << endl;

    sum();
    cout << glo << is_true;    // true = 1 , false = 0;

    cout << endl;

    return 0;
}
