#include <iostream>
using namespace std;
int factorialN(int n){
    
    int fact = 1;         // factorial of 0 and 1 is 1 so we initialize fact with 1
    
    for (int i=1;i<=n;i++){
        fact *= i;
    }

    return fact;
}

int main(){
    
    cout<<factorialN(5)<<endl;
    cout<<factorialN(10)<<endl;
    
    return 0;
}