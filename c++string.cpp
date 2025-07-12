#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s1};
    string s6{s1,0,3};
    string s7(10,'X');

    // cout << s0 << endl;
    // cout << s0.length() << endl;


    // Initialisation

    // cout << "\n Initialisation " << "\n--------------------------------" << endl;
    // cout <<"s1 is initialised to: " << s1 << endl;
    // cout <<"s2 is initialised to: " << s2 << endl;
    // cout <<"s3 is initialised to: " << s3 << endl;
    // cout <<"s4 is initialised to: " << s4 << endl;
    // cout <<"s5 is initialised to: " << s5 << endl;
    // cout <<"s6 is initialised to: " << s6 << endl;
    // cout <<"s7 is initialised to: " << s7 << endl;
    // cout << endl;


    // Comparison
    // cout <<"\n Comparison " << "\n --------------------------- " << endl;
    // cout << boolalpha;
    // cout << s1 <<" == " << s5 <<" : " << (s1 == s5) << endl;
    // cout << s1 <<" == " << s2 <<" : " << (s1 == s2) << endl;
    // cout << s1 <<" != " << s2 <<" : " << (s1 != s2) << endl;
    // cout << s1 <<" < " << s2 <<" : " << (s1 < s2) << endl;
    // cout << s2 <<" > " << s1 <<" : " << (s2 > s1) << endl;
    // cout << s4 <<" < " << s5 <<" : " << (s4 < s5) << endl;
    // cout << s1 <<" == " << "Apple" <<" : " << (s1 == s5) << endl;


    // Assignment 
    // cout <<"\n Assignment " <<"\n ------------------------------- " << endl;

    // s1="Watermelon";
    // cout <<"s1 is now: " << s1 << endl;
    // s2=s1;
    // cout <<" s2 is now: " << s2 << endl;
    
    // s3="Frank";
    // cout <<" s3 is now " << s3 << endl;
    // s3[0] = 'C';
    // cout <<"s3 change first letter to 'C':" << s3 << endl;
    // s3.at(0) = 'P';
    // cout <<" s3 change first letter to 'P':" << s3 << endl;

    
    // Concentration

    // s3 =" Watermelon ";
    // cout <<"\n Concentration " <<"\n --------------------------- " << endl;

    // s3 = s5 + " and " + s2 = " juice ";
    // cout <<" s3 is now: " << s3 << endl;

    // s3 = "nice" + "cold" + s5 + "juice";     //complier error  



    //For loop
    // cout <<"\n Looping " <<"\n -------------------------------- " << endl;

    // s1 =" Apple ";
    // for(size_t i{0}; i < s1.length(); ++i)
    //    cout << s1.at(i);
    // cout << endl;


    // Range bases for loop
    // for(char c:s1)
    //    cout << c;
    // cout << endl;


    // Substring
    // cout <<"\n Substring " <<"\n ----------------------------- " << endl;
    // s1 = "This is a test";

    // cout << s1.substr(0,4) << endl;
    // cout << s1.substr(5,2) << endl;
    // cout << s1.substr(10,4) << endl;


    // Erase 
    // cout <<"\n Erase " <<"\n ------------------------------- " << endl;

    // s1 = "This is a test";
    // s1.erase(0,5);
    // cout <<" s1 is now: " << s1 << endl;


    // getline
    // cout <<"\n getline " <<"\n -------------------------------- " << endl;

    // string full_name{};

    // cout <<" Enter your full name ";
    // getline(cin,full_name);

    // cout <<" Your full name is: " << full_name << endl;
    
    
    // Find
    cout <<"\n Find " <<"\n -------------------------- " << endl;
    
    s1 = " This secret word is Boo ";
    string word{};

    cout <<" Enter the word to find: ";
    cin >> word;

    size_t position = s1.find(word);
    if(position != string::npos)
      cout <<" Found " << word <<" at position: " << position << endl;
    else
      cout <<" Sorry, " << word <<" not found " << endl;

    cout << endl;

    return 0;

}