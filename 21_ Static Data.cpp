#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << " Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << " The id of the emloyee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        cout <<" The value of count is " << count << endl;
    }
};

int Employee ::count; // Default value is zero
int main()
{
    Employee harry;
    Employee rohan;
    Employee lovish;
    // Count is the static data memeber of class employee 
    // harry.id = 1;
    // harry.count = 1;  // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    cout << endl;
    return 0;
}