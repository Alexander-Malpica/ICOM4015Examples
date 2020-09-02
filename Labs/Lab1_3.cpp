#include<iostream>
#include<string>
using namespace std;

double taxDue(double taxableIncome);

int main()
{
    // THIS MAIN FUNCTION ALLOWS YOU TO TEST YOUR CODE
    cout << taxDue(5000) << endl;  // 0 expected
    cout << taxDue(10000) << endl; // 70 expected 
    cout << taxDue(25000) << endl; // 1120 expected
    cout << taxDue(30000) << endl; // 1870 expected
    cout << taxDue(50000) << endl; // 4870 expected
    cout << taxDue(55000) << endl; // 6120 expected
    cout << taxDue(75000) << endl; // 11120 expected
    cout << taxDue(85000) << endl; // 14620 expected
}

// COMPLETE THE FOLLOWING FUNCTION & PASTE IN QUESTION EDITOR
double taxDue(double taxableIncome) {

    // Variables
    double Income;

    // Calculations
    if (taxableIncome >= 75000)
    {
        Income = 11120 + ((taxableIncome - 75000) * 0.35);
    }
    else if (taxableIncome >= 50000)
    {
        Income = 4870 + ((taxableIncome - 50000) * 0.25);
    }
    else if (taxableIncome >= 25000)
    {
        Income = 1120 + ((taxableIncome - 25000) * 0.15);
    }
    else if (taxableIncome >= 9000)
    {
        Income = (taxableIncome - 9000) * 0.07;
    }
    else
    {
        Income = 0;
    }

    return Income;
}

