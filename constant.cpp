#include <iostream>
using namespace std;
int main()
{
    cout <<" Hello, Welcome to the Yash's carpet cleaning services " << endl << endl;
    cout <<" How many rooms would you like to cleaned ? " << endl;

    int number_of_rooms {0};
    cin >> number_of_rooms;

    const double price_per_room{30.0};
    const double sales_tax{0.06};
    const int estimate_expiry {30};
    


    cout <<"\nEstimate for carpet cleaning service " << endl;
    cout <<" Number of rooms " << number_of_rooms << endl;
    cout <<" Price per room : $" << 30.00 << endl;
    cout <<" Cost :$" << 30.00*number_of_rooms << endl;
    cout <<" Tax :$" << 30.00*number_of_rooms*0.06 << endl;
    cout <<" =================================== " << endl;
    cout <<" Total eatimate :$" << (30.00*number_of_rooms)+(30.00*number_of_rooms*0.06) << endl;
    cout <<" This estimate is valid for " << 30.00 <<" days " << endl;


     



    return 0;

}