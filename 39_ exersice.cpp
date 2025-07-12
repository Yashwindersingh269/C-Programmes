#include <iostream>
using namespace std;
int main()
{
    int num;
    int reversedNum;

    cout << " Enter a number you want to reverse " << endl;
    cin >> num;

    while (num != 0)
    {
        int lastdigit = num % 10;
        reversedNum = reversedNum * 10 + lastdigit;
        num = num / 10;
    }

    cout << " Your reversed Number is " << reversedNum << endl;

    return 0;
}