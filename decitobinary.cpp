#include <iostream>
using namespace std;
int decNum(int n){
    int ans=0;  //binNum
    int pow=1;  // pow(2,i)

    while(n>0){           //for n =10
        int rem = n%2;    //rem = 0 , 1, 0, 1
        n/=2;             // n = 5, 2, 1, 0

        ans+=(rem*pow);   // ans = 0 + 1*1 = 1, ans = 1 + 0*10 = 1, ans = 1 + 1*100 = 101, ans = 101 + 0*1000 = 101
        pow*=10;          // pow = 1*10 = 10, pow = 10*10 = 100, pow = 100*10 = 1000, pow = 1000*10 = 10000

    }
    return ans;           // return 1010
}

int main(){
    cout<<decNum(100)<<endl;     //1100100
    cout<<decNum(10)<<endl;      //1010

    // for  1 to 10
    for (int i = 0; i <=10; i++){
        cout<<decNum(i)<<endl;      // 0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010
    }
    return 0;
}