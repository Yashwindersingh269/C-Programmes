#include <iostream>
using namespace std;
int main()
{
    int a;
    cout <<" Enter any number " << endl;
    cin >> a;

    cout <<" Here is your table of " << a << endl;

    int i = 1;
    while(i<=10){
        cout << a*i << endl;
        i++;
    }

    cout << endl;
    return 0;
}