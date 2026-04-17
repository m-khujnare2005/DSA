#include <iostream>
using namespace std;
int sumofdigit(int num){
    int digitsum = 0;
    int lastdigit;
    while(num>0){
        lastdigit = num % 10;
        num /= 10;
        digitsum += lastdigit;
    }
    return digitsum;
}

int main(){
    cout<<sumofdigit(1234)<<endl;
    cout<<sumofdigit(5678)<<endl;
    
    return 0;
}
