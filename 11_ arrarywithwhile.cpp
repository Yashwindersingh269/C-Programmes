#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {99, 98, 97, 96, 95};
    int i = 0;
    while(i<=4){
        cout <<" Marks stored in " << i <<" is " << marks[i] << endl;
        i++;
    }
    cout << endl;
    return 0;
}