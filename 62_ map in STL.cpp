// map <data_type_of_key,   data_type_of_value>  variable_name;

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    // Map is an associative array
    map<string, int> marksMap;
    marksMap["Atul"] = 58;
    marksMap["Rohit"] = 57;
    marksMap["Kishlay"] = 78;
    marksMap["Aditya"] = 65;
    marksMap["Sachin"] = 53;

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
         marksMap.insert( { {"Rohan", 89}, {"Akshat", 46} } );

    }

    return 0;
}

// syntax for using insert
// marksMap.insert({pair_1,pair_2......pair_n});



