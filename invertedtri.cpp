//output:
// 1 1 1 1      space
//   2 2 2      1 space + 3 number
//     3 3      2 spaces + 2 number
//       4      3 spaces + 1 number


#include <iostream>
using namespace std;
int main(){
    int n = 4;

    for (int i=0;i<n;i++){
        for (int j=0;j<i;j++){
            cout<<"  ";   // for spaces
        }
        for (int j=0;j<n-i;j++){  // for numbers
            cout<<(i+1)<<" ";  
            
        }

        cout<<endl;
    }
    return 0;
}