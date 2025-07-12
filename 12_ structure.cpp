#include <iostream>
using namespace std;

    struct employee
    {
        int eId;
        char favChar;
        float salary;
    };

    union money
    {
        int rice;
        char car;
        float pounds;
    };

    int main()
    {
        enum Meal{ breakfast, lunch, dinner};
        Meal m1 = lunch;
        cout << m1;
        // cout << breakfast << endl;
        // cout << lunch << endl;
        // cout << dinner << endl;

        // union money m1;
        // m1.rice = 34;
        // m1.rice = 'c';
        // cout << m1.rice;

        // struct employee yash;
        // struct employee shubam;
        // struct employee bam;
        // yash.eId = 1;
        // yash.favChar = 'c';
        // yash.salary = 12000000;
        // cout <<" yash.salary: " << endl;
        // cout <<" The value is " << yash.eId << endl;    
        // cout <<" The value is " << yash.favChar << endl;    
        // cout <<" The value is " << yash.salary << endl;    


        return 0;


    }
    


    
