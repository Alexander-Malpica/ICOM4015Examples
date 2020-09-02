//Area de triangulo con sus 3 lados con la formula de Heros

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;

    cout << "Enter side1: ";
    cin >> num;
    double side1 = num;
    cout << "Enter side2: ";
    cin >> num;
    double side2 = num;
    cout << "Enter side3: ";
    cin >> num;
    double side3 = num;

    double s = (side1 + side2 + side3) / 2.0;

    double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

    cout << "The area is " << area << endl;

    return 0;
}