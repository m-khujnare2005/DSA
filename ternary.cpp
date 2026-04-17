// ternary statement 
// syntax -  (condition) ? expression1 : expression2
#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    
    string result = (n>=0) ? "positive number" : "negative number"; // ? is used to check the condition and : is used to separate the two expressions
    cout<<"result:"<<result<<endl;
    
    return 0;
}