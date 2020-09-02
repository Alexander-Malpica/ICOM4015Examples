#include "Triangle.h"
#include <iostream>
#include <cmath>

using namespace std;

// static bool largerThan(Triangle t1, Triangle t2) 
// {
//     // Determine if first triangle is larger than the second

// }

// static double sumAreas(Triangle triangle[])
// {
//     //Code to sum the areas of the Triangle's in the array
    
// }


int main() {

    Triangle *t1 = new Triangle(10.0, 10.0, 10.0);
    cout << "The area 1 is " << t1->getArea() << endl;
    Triangle *t2 = new Triangle(20.0, 20.0, 20.0);
    cout << "The area 2 is " << t2->getArea() << endl;
    Triangle *t3 = new Triangle(10.0, 20.0, 29.0);
    cout << "The area 3 is " << t3->getArea() << endl;

    Triangle *triangleList[] = { t1, t2, t3 };
    cout << "Total area is: " << Triangle::sumAreas(triangleList, 3) << endl;
    cout << "Total area is: " << Triangle::sumAreas(triangleList, 3) << endl;


    return 0;
}