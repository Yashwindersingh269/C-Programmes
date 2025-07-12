#include <iostream>
using namespace std;

// Functions Prototype
// type function-name (arguments);
// int sum(int a, int b);  ------> Acceptable
// int sum(int a, b);  ------> Not Acceptable
int sum(int , int ); // ------> Acceptable
void g(void);   // --------> Acceptable

int main()
{
    int num1, num2;
    cout <<" Enter your first number " << endl;
    cin >> num1;
    cout <<" Enter your second number " << endl;
    cin >> num2;
    // num1 and num2 are actual parameters 
    cout <<" The sum is " << sum(num1 , num2) << endl;
    g();
    
    cout << endl;
    return 0;
}

int sum(int a, int b){
    // Formal parameters a and b will be taking values from actual parameter num1 and num2
    int c = a+b;
    return c;

}

void g(){
    cout <<"\n  Hello, Good Morning! " << endl;

}
