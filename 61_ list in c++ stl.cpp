//      list<int> :: iterator it;

#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // empty list

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(9);
    list1.push_back(12);
    list1.remove(9);

    display(list1);
    list1.sort();
    display(list1);

    // Creating and assigning list2 of 3 elements
    list<int> list2(3);
    list<int>::iterator it = list2.begin();
    *it++ = 45;
    *it++ = 6;
    *it = 9;

    display(list2);

    list1.pop_back();
    display(list1);
    list1.pop_front();
    display(list1);

    return 0;
}

