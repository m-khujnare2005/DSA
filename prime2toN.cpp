#include <iostream>
using namespace std;

int prime(int n){
    if (n <= 1){
        return 0;
    }
    else{
        for (int i = 2; i * i <= n; i++){
            if (n % i == 0){
                cout<<"not prime"<<endl;  // not prime
            }
            else{
                cout<<"prime"<<endl;  // prime
            }
        }
        return n;  // prime
    }
}

int main(){
    cout <<prime(63) << endl;  // 1 (prime)
    cout <<prime(15) << endl;  // 0 (not prime)
}