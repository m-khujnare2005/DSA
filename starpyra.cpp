//output:
//        *
//      * * *
//    * * * * *
//  * * * * * * *


#include <iostream>
using namespace std;
int main(){
    int n = 4;

    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){   // (n-i-1)
            cout<<"  ";   // for spaces 
        }
        for (int j=0;j<i+1;j++){     // (i+1)
            cout<<"* ";  // for increasing numbers (for triangle)
        }
        for (int j=i-1;j>=0;j--){    // (i-1)
            cout<<"* ";  // for decreasing numbers (reverse triangle)
        }
        cout<<endl;
    }
    return 0;
}