// Unary Operators
// In C++, unary operators are operators that operate on a single operand. They can be used to perform various operations such as negation, incrementing, and dereferencing. Here are some common unary operators in C++:
// 1. Negation Operator (-): This operator negates the value of its operand.
// 2. Increment Operator (++): This operator increments the value of its operand by 1   (can be used in both prefix and postfix forms).
// 3. Decrement Operator (--): This operator decrements the value of its operand by 1   (can be used in both prefix and postfix forms).
// 4. Logical NOT Operator (!): This operator negates the boolean value of its operand
// 5. Address-of Operator (&): This operator returns the memory address of its operand.
// 6. Dereference Operator (*): This operator is used to access the value at a
//    specific memory address (used with pointers).
// 7. Sizeof Operator: This operator returns the size of a data type or variable

#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = a++; // increment a after assigning its value to b
    cout<<"b"<<b<<endl;
    cout<<"a"<<a<<endl;
    return 0;
}



// a++ = (kaam then update (++))post increment: returns the value of a before incrementing it
// ++a = (update(++) then kaam) pre increment: increments a first and then returns the new value of a



#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = ++a; // increment a before assigning its value to b
    cout<<"b"<<b<<endl;
    cout<<"a"<<a<<endl;
    return 0;
}


//a-- = (kaam then update (--)) post dcrement
//--a = (update(--) then kaam) pre decrement


#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = a--; // decrement a after assigning its value to b
    cout<<"b"<<b<<endl;
    cout<<"a"<<a<<endl;
    return 0;
}