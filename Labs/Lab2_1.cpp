#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

/* The following code example is a QUICK REVIEW  
   of basic programming constructs in C++.
   And by the way this is a block comment. */

// This is a line comment
int main()
{ // main is the starting point of C++ programs

    // Declaring variables
    int number1 = 12345; // an integer number
    // statements end with a ; (semi-colon)

    // a single precision floating point (decimal) number
    float number3 = 119.99;

    // a double precision floating point (decimal) number
    double number2 = 1199.97;

    char grade = 'A'; // a character (notice the single quotes)

    string school = "Univ. of Puerto Rico"; // (regular quotes)

    // Display to the console/terminal
    cout << number1 << endl;
    cout << number2 + number3 << endl;

    int number4;
    // Input number from the console and display it
    cin >> number4;
    cout << number4 << endl;

    // Simple if statement
    if (number4 > 0)
    {
        cout << "Valid input" << endl;
    }

    // If-else statement and logical expression
    if (number1 > number2 || number3 < number4)
    {
        number1 = number4;
    }
    else
    {
        number1 = number3;
    }

    // Ternary Operator (similar to the above if-else statement)
    int score = 75;
    string outcome;
    outcome = ((score > 70) ? "passed" : "try again");
    cout << outcome << endl;

    return 0; // If you reach this line and all goes well return zero
}
