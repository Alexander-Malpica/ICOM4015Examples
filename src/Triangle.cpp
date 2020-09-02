#include "Triangle.h"
#include <iostream>
#include <cmath>

using namespace std;


double Triangle::getArea() {
    double s = (this->side1 + this->side2 + this->side3) / 2.0;
    double area = sqrt(s * (s - this->side1) * (s - this->side2) * (this->side3)); //Formula de Heros
    return area;
}