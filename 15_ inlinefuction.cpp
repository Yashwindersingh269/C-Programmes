#include <iostream>
using namespace std;
int product(int a, int b){
    return a*b;
}

// int product(int a, int b){  // not recommend to use inline with static 
//     static int c = 0;  // This execute only once 
//     c = c+1;    // Next time this function is run, the value of c will be retained
//     return a*b+c;
// }

int moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}
// int strlen(const char*p){

// }
int main()
{

    int a, b;
    // cout <<" Enter the value of a and b " << endl;
    // cin >> a >> b;
    // cout <<" The product of a and b is " << product(a,b) << endl;
    int money = 100000;
    cout <<" If you have " << money <<" Rs in your bank account, you will receive " << moneyReceived(money) <<" Rs after one year" << endl;
    cout <<" For VIP: If you have " << money <<" Rs in your bank account, you will receive " << moneyReceived(money,1.1) <<" Rs after one year" << endl;
    return 0;
}