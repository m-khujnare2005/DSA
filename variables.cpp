#include <iostream>             //Variables(Identifier) in C++ are used to store data that can be manipulated during program execution. They have a specific type that determines the kind of data they can hold, such as integers, floating-point numbers, characters, etc. Variables must be declared before they can be used, and they can be initialized with a value at the time of declaration or assigned a value later in the program. The syntax for declaring a variable is: type variableName; and for initializing it: type variableName = value;. Variables play a crucial role in programming as they allow us to store and manipulate data dynamically.
using namespace std;            //Data type - primitive = int, char, float, double, bool
int main()
{
    int age = 25;               //variable = data type + variable name + value 
    char name = 'M';      //in character the value stored in single quote(' ') and in string the value stored in double quote(" ")
    float height = 5.9f;        //f = float literal, by default decimal numbers are treated as double in C++
    bool isStudent = true;      //bool = boolean data type, can hold only two values: true or false
    double weight = 70.54545;

    cout << "Name: " << name << endl;   //cout = console output   << = insertion operator
    cout << "Age: " << age << endl;     //char = 1byte, int = 4byte, float = 4byte, double = 8byte, bool = 1byte
    cout << "Height: " << height << endl;
    cout << "Is Student: " << isStudent << endl;
    cout << "Weight: " << weight << endl;
    return 0;
}


//Type casting - implicit and explicit
//implicit type casting - automatic conversion of one data type to another by the compiler, ex- int a = 10; float b = a; // a is implicitly converted to float
//explicit type casting - manual conversion of one data type to another by the programmer, ex- int a = 10; float b = (float)a; // a is explicitly converted to float using C-style cast

//Example = implicit (char to int conversion)
#include <iostream>
using namespace std;
int main()
{
    char grade = 'A';

    int value = grade;
    cout<<value<<endl; // implicit type casting, output will be the ASCII value of 'A' which is 65

    return 0;
}



//Example = 
#include <iostream>
using namespace std;
int main()
{
    double price = 19.99;

    int newPrice = (int)price; // explicit type casting using C-style cast
    cout<<newPrice<<endl; // output will be 19, the decimal part is truncated

    return 0;
}