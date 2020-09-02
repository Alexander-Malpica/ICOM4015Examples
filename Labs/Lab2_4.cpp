
#include <iostream>
#include <string>
using namespace std;

void stringPractice(string dept, string name, string email, string office);

int main()
{
    stringPractice("ININ", "Smith", "smith.john@uprx.edu", "II-333");
    stringPractice("ICOM", "Farrell", "farrell.maryjane@uprx.edu", "S-321");
    return 0;
}

void stringPractice(string dept, string name, string email, string office)
{

    // DO NOT CHANGE THE FOLLOWING ******************************** //
    string output = "";

    // Initialize a string with the text "Engineering"
    string college = "Engineering";

    // DO NOT CHANGE THE CODE ABOVE ****************************** //

    // Copy the string name (passed as an argument) by using the assignment (=) operator
    // ADD YOUR CODE HERE //
    output = name;
    // Display string assigned to the variable output
    cout << output << endl;

    // Concatenate the string "Office: " to the office parameter using with (+) operator
    // ADD YOUR CODE HERE //
    output = "Office: " + office;
    cout << output << endl;

    // Concatenate strings using append() and observe output
    // Append " Department" to the end of the dept string passed as a parameter
    // ADD YOUR CODE HERE //
    dept.append(" Department");
    cout << dept << endl;

    // Concatenate strings using the compond assignment operator (+=)
    // to append "-College of " to the end of the dept variable
    // ADD YOUR CODE HERE //
    dept.append("-College of ");
    // Now append the string stored in the local variable college to dept
    // ADD YOUR CODE HERE //
    dept.append(college);
    cout << dept << endl;

    // Get and display the length of the email string, email is the target object
    cout << email.length() << endl;

    // Find the index of the first occurance of character '@' in the email
    // If found display "Valid E-Mail" otherwise "Invalid E-Mail"
    // ADD YOUR CODE BELOW //
    if (email.find('@'))
    {
        cout << "Valid E-Mail\n";
    }
    else
    {
        "Invalid E-Mail\n";
    }
    
    
    // Find the index of the first occurance of String "uprx" in the email
    cout << email.find("uprx") << endl;

    // Starting at index where "uprx" was found, replace "uprx" with "uprm"
    email = email.replace(email.find("uprx"), 4, "uprm");
    cout << email << endl;
}
