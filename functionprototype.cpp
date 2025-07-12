#include <iostream>
using namespace std;
// Functioon Prototype
double calc_volume_cylinder(double radius,double height);
double calc_area_circle(double);
void area_circle();
void volume_cylinder();


const double pi = 3.14159;

int main(){
    area_circle();
    volume_cylinder();
    return 0;
}

double calc_volume_cylinder(double radius,double height ){
   // return pi*radius*radius*height;
   return calc_area_circle(radius)*height;
}

double calc_area_circle(double radius){
    return pi*radius*radius;

}

void area_circle(){
    double radius{};
    cout <<"\n Enter the radius of the circle: ";
    cin >> radius;
    cout <<" The area of the circle with radius " << radius <<" is " << calc_area_circle(radius) << endl;

}

void volume_cylinder(){
    double radius{};
    double height{};
    cout <<"\n Enter the radius of the cylinder: ";
    cin >> radius;
    cout <<"\n Enter the height of the cylinder: ";
    cin >> height;

    cout <<" The volume of the cylinder with radius " << radius <<" and height " << height <<" is " << calc_volume_cylinder(radius,height) << endl;


}
