// vector<data_type> vector_name;

// Syntax
// #include<iostream>
// #include<vector>

// int main(){

//     vector<int> vec1;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    int element, size;
    cout << "Enter the size of your vector" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        cout << endl;
        vec1.push_back(element);
    }
    display(vec1);
    vec1.pop_back();
    display(vec1);
    return 0;
}
