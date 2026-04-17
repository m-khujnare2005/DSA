// operators are symbols that perform operations on variables and values.
// types of operators in C++ - arithmetic, relational, logical, bitwise, assignment, etc.


// arithmetic operators - +, -, *, /, %         
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5;
    //int sum = a+b; // 

    cout <<"Sum: "<<(a+b)<<endl; //addition
    cout <<"Difference: "<<(a-b)<<endl; //subtraction
    cout <<"Product: "<<(a*b)<<endl; //multiplication (* = asterisk)
    cout <<"Quotient: "<<(a/b)<<endl; //division
    cout <<"Remainder: "<<(a%b)<<endl; //modulus (remainder)

    int ans = (a/(double) b);
    cout<<ans<<endl;
    return 0;
}






// relational operators - ==, !=, >, <, >=, <= (decimal value convert to integer value)
#include <iostream>
using namespace std;    // relational operator give boolean values
int main()
{
    int a = 10, b = 5;
    cout << (a == b) << endl; // equality operator, output will be 0 (false)
    cout << (a != b) << endl; // inequality operator, output will be 1 (true)
    cout << (a > b) << endl; // greater than operator, output will be 1 (true)
    cout << (a < b) << endl; // less than operator, output will be 0 (false)
    cout << (a >= b) << endl; // greater than or equal to operator, output will be 1 (true)
    cout << (a <= b) << endl; // less than or equal to operator, output will be 0 (false)
    return 0;
}






// logical operators - (AND)&&, (OR)||, (NOT)!
//AND = T+T=T, T+F=F, F+T=F, F+F=F
//OR = T+T=T, T+F=T, F+T=T, F+F=F
//NOT = !T=F, !F=T
// logical operators are used to combine multiple conditions and return a boolean value based on the result of those conditions.
// The AND operator (&&) returns true if both conditions are true, the OR operator (||) returns true if at least one condition is true, and the NOT operator (!) negates the value of a condition.
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5;
    cout << ((a > b) && (a != b)) << endl; // AND operator, output will be 1 (true)
    cout << ((a > b) || (a == b)) << endl; // OR operator, output will be 1 (true)
    cout << !(a < b) << endl; // NOT operator, output will be 1 (true)


    cout << ((a < b) && (a == b)) << endl; // AND operator, output will be 0 (false)
    cout << ((a < b) || (a == b)) << endl; // OR operator, output will be 0 (false)
    cout << !(a > b) << endl; // NOT operator, output will be 0 (false)
    return 0;
}