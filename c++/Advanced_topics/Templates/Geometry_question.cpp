// Define a namespace Geometry with two functions:
// areaRectangle(length, breadth) to calculate the area of a rectangle.
// areaCircle(radius) to calculate the area of a circle.
// Use this namespace in your program to calculate and display the areas.


#include<iostream>
using namespace std;

namespace Geometry{
    int areaRectangle(int length,int breadth){
        return length*breadth;
    }
    double areaCircle(double radius){
        return 3.14*radius;
    }
}
int main(){
    using namespace Geometry;
    cout<<"area of circle is :"<<areaCircle(10.0)<<endl;
    cout<<"area of rectangle is :"<<areaRectangle(10,20);
}