#include <iostream>
using namespace std;
int sum(int a ,int b){    //parameter a and b
    int s = a + b;
    return s;
}

//min of 2 numbers
int min(int a, int b){    // parameter a and b
    if(a < b){
        cout << "a is smaller than b";
    }
    else if(b < a){
        cout << "b is smaller than a";
    }
    else{
        cout << "a and b are equal";
    }
}

int main(){
    cout<<sum(10,20)<<endl;   // function call
    cout<<min(30,50)<<endl;   // 30 and 50 are arguments
    return 0;
} 