//output:
//1
//2 1
//3 2 1
//4 3 2 1

#include <iostream>
using namespace std;
int main(){
     int n =4;
    
    for (int i=0;i<=n;i++){     // outer loop starts from 1 and increments until it reaches n
        for(int j=i+1;j>=1;j--){    // inner loop starts from i and decrements until it reaches 1
            cout<<j<<" ";

        }
        cout<<endl;

    }
    return 0;
}