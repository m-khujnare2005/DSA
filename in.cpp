#include <iostream>
using namespace std;
int main()
{
    int age;     // cin , cout = global objects for input and output operations, respectively. cin is used to read input from the user, while cout is used to display output to the console. The >> operator is used with cin to extract values from the input stream and store them in variables, while the << operator is used with cout to insert values into the output stream for display.
    double price;
    cout << "Enter your age: ";
    cin >> age; // cin = console input   >> = extraction operator
    cout << "Your age is: " << age << endl;
    cout << "Enter the price: ";
    cin >> price;
    cout << "The price is: " << price << endl;
    return 0;
}