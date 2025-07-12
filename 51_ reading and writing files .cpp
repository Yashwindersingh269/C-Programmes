#include<iostream>
#include<fstream>
using namespace std;
/* The useful classes for working with files in C++ are: 
   1. fstreambase
   2. ifstream ----> derived from fstreambase
   3. ofstream ----> derived from fstreambase
*/

/* In order to work with the files in C++, you will have to open it. there are 2 ways to open a file
   1. Using the constructor 
   2. Using the memeber function open() of the class
*/

int main(){
    // string st = "Yash bhai";
    // // Opening files using constructor and writing it
    // ofstream out("sample51.txt"); // Write operation
    // out<<st;

    string st2;
    // Opening files using constructor and reading it
    ifstream in("sample51b.txt"); // Read operation
    in>>st2;
    getline(in, st2);  
    cout<<st2;
    return 0;
}