#include <iostream>
using namespace std;
int main()
{
    int num1{};
    int num2{10};
    int num3{100};
    int num4{1000};
    int result1{};
    int result2{};
    int result3{};
    int result4{};
    int result5{};
    int reversedNumber{};
    
    cout <<" Enter an integer ";
    cin  >> num1;
    if(num1 >= 100 && num1 < 1000){
        result1 = num1 / num2;
        //cout << num1 <<" / " << num2 <<" = " << result1 << endl;
    
        result2 = num1 % num2;
        //cout << num1 <<" % " << num2 <<" = " << result2 << endl;
    
        reversedNumber = (result2 * 100) + (result1 % 10)*10 + (result1 / 10);
        // cout << result2*100 <<" + " << (result1%10)*10 <<" + " << result1/10 <<" = " << reversedNumber << endl;
        cout <<" Your reversed number is " << reversedNumber << endl;

    }

    if(num1 >=0 && num1 <100){
        result1 = num1 / num2;
        //cout << num1 <<" / " << num2 <<" = " << result1 << endl;
    
        result2 = num1 % num2;
        //cout << num1 <<" % " << num2 <<" = " << result2 << endl;
    
        reversedNumber = (result2 * 10) + (result1); 
        //cout << result2*10 <<" + " << (result1)<<" = " << reversedNumber << endl;
        cout <<" Your reversed number is " << reversedNumber << endl;
    }

    if(num1 >=1000 && num1 < 10000){
        result1 = num1 / num2;
        //cout << num1 <<" / " << num2 <<" = " << result1 << endl;
    
        result2 = num1 % num2;
        //cout << num1 <<" % " << num2 <<" = " << result2 << endl;

        result3 = num1 % num3;
        //cout << num1 <<" % " << num3 <<" = " << result3 << endl;

        result4 = num1 / num3;
        //cout << num1 <<" / " << num3 <<" = " << result4 << endl;
    
        reversedNumber = (result2 * 1000) + (result3 / 10)*100 + (result4 % 10)*10 + result4 / 10;
        //cout << result2*1000 <<" + " << (result3/10)*100 <<" + " << (result3%10)*10 <<" + " << result4/10 <<" = " << reversedNumber << endl;
        cout <<" Your reversed number is " << reversedNumber << endl;
    }

    if(num1 >= 10000 && num1 < 100000){
        result1 = num1 / num2;
        //cout << num1 <<" / " << num2 <<" = " << result1 << endl;
    
        result2 = num1 % num2;
        //cout << num1 <<" % " << num2 <<" = " << result2 << endl;

        result3 = num1 % num3;
        //cout << num1 <<" % " << num3 <<" = " << result3 << endl;

        result4 = num1 / num3;
        //cout << num1 <<" / " << num3 <<" = " << result4 << endl;

        result5 = num1 / num4;
        //cout << num1 <<" / " << num4 <<" = " << result5 << endl;
    
        reversedNumber = (result2 * 10000) + (result3 / 10)*1000 + (result4 % 10)*100 + (result5 % 10)*10 + result5 / 10;
        //cout << result2*10000 <<" + " << (result3/10)*1000 <<" + " << (result4%10)*100 <<" + " << (result5%10)*10 <<" + " << result5/10 <<" = " << reversedNumber << endl;
        cout <<" Your reversed number is " << reversedNumber << endl;
    }

    if(num1 >=100000){
        cout <<" My today's work is done i will do it tomorrow "<< endl;
        cout <<" Thanku You  " << endl;
    }
   cout << endl;

   return 0;
}