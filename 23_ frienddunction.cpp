#include <iostream>
using namespace std;
class Complex
{
    int a, b;
    friend Complex sumComplex(Complex o1, Complex o2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Below lines mean that non members - sumComplex function is allowed to do anything with my private data
    void printNumber()
    {
        cout << " Your number is " << a << " + " << b << " i " << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(4, 2);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

// properties of freind function
// 1. not in the scope of class
// 2. since it is not in the scope class, it cannot be called from the object of that class. c1.sumComplex() = invalid_argument
// 3. Can be involved without the help of any object
// 4. usually contains the object as arguments
// 5. Can be declared inside public or private section of the class
// 6. It cannot access the members directly by their names and need object_name, member_name to access any member