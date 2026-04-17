//output:
//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1

#include <iostream>
using namespace std;
int main(){
    int n = 4;
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){    
            cout<<"  ";   // for spaces
        }
        for (int j=0;j<i+1;j++){
            cout<<(j+1)<<" ";  // for increasing numbers (for triangle)
        }
        for (int j=i-1;j>=0;j--){
            cout<<(j+1)<<" ";  // for decreasing numbers (reverse triangle)
        }
        cout<<endl;
    }
    return 0;
}
