#include <iostream>
using namespace std;
int binNum(int n){
    int ans =0;
    int pow =1;
    
    while(n>0){
        int rem = n%10;    // rem = 0, 1, 0, 1
        ans+=(rem*pow);   // ans = 0 + 1*1 = 1, ans = 1 + 0*2 = 1, ans = 1 + 1*4 = 5, ans = 5 + 0*8 = 5
        
        
        n/=10;           // n = 101, 10, 1, 0
        pow*=2;          // pow = 1*2 = 2, pow =
    }
    return ans;
}

int main(){
    cout<<binNum(1100100)<<endl;     //100
    cout<<binNum(1010)<<endl;        //10

    // for  1 to 10
    for (int i = 0; i <=10; i++){
        cout<<binNum(i)<<endl;      // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    }
    return 0;
}
