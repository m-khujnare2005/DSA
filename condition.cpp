// Conditional statemnet
//if else statement
//syntax -  if(condition){
//              //code to be executed if condition is true  
//          }else{
//              //code to be executed if condition is false
//           }
#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    
    if (n>=0){
        cout<<"positive number"<<endl;
    }else{
        cout<<"negative number"<<endl;
    }
    return 0;
}