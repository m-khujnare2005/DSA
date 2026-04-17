#include <iostream>
using namespace std;         //nCr = n! / (r! * (n-r)!)
int factorialN(int n){
    
    int fact = 1;         // factorial of 0 and 1 is 1 so we initialize fact with 1
    
    for (int i=1;i<=n;i++){
        fact *= i;
    }

    return fact;
}

//nCr = n! / (r! * (n-r)!)
int nCr(int n, int r){
    int fact_n = factorialN(n);
    int fact_r = factorialN(r);
    int fact_n_r = factorialN(n-r);

    return fact_n / (fact_r * fact_n_r);
}

int main(){
    cout<<nCr(5,2)<<endl;   // 5C2 = 10
    cout<<nCr(10,3)<<endl;  // 10C3 = 120
    
    return 0;
}