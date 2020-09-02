#include <iostream>
#include <string>
using namespace std;

int main()
{

    // Initialize a string
    string almaMater = "Colegio de Mayaguez";

    // Copy a string to another string variable with the assignment (=) operator
    string output = almaMater;

    // Display string assigned to the variable output
    cout << output << endl;

    // Concatenate strings with + operator
    output = almaMater + " Antes, Ahora y Siempre";
    cout << output << endl;

    // Concatenate strings with append()
    // Appends to almaMater(this target string object) another paramter string
    almaMater.append(" Antes, Ahora y Siempre");
    cout << almaMater << endl;

    // Concatenate strings with += operator
    almaMater += " Antes, Ahora y Siempre";
    cout << almaMater << endl;

    // Get the length of the target string
    cout << almaMater.length() << endl;
    cout << almaMater.size() << endl;

    // Determine if the target string is empty
    cout << almaMater.empty() << endl;

    // Find the index of the first occurance of character 'a'
    cout << almaMater.find('a') << endl;

    // Find the index of the first occurance of character 'a' starting at index 10
    cout << almaMater.find('a', 10) << endl;

    string department = "Computer Science and Engineering";

    // Find the index of the first occurance of String "and"
    cout << department.find("and") << endl;

    // Insert string at the specified the index (where "and" was found)
    cout << department.insert(17, "AND") << endl;

    // Starting at index 17, erase 3 charaters (undo the previous statement)
    cout << department.erase(17, 3) << endl;

    // Starting at index 17, replace 3 charaters (the "and") with the string " & "
    cout << department.replace(17, 3, " & ") << endl;

    return 0;
}
