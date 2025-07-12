#include<iostream>
using namespace std;

// Both will give the same output 
// class A{
//     int a;
//     public:
//         void setData(int a){
//             this->a = a;
//         }

//         void getData(){
//             cout<<"The value of a is "<<a<<endl;
//         }
// };

// int main(){
//     A a;
//     a.setData(4);
//     a.getData();
//     return 0;
// }

// This is the keyword which is pointer which points to the object which invokes the memeber function


class A{
    int a;
    public:
         A & setData(int a){
            this->a = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    a.setData(4).getData();
    return 0;
}


