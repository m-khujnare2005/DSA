//output:
//        A
//      A B A
//    A B C B A
//  A B C D C B A


#include <iostream>
using namespace std;
int main(){
    int n = 4;

    for (int i=0;i<n;i++){
        char ch = 'A';
        for (int j=0;j<n-i-1;j++){    
            cout<<"  ";   // for spaces
        }
        for (int j=0;j<i+1;j++){
            cout<<(ch)<<" ";  // for increasing numbers (for triangle)
            ch = ch + 1;
        }
        for (int j=i-1;j>=0;j--){
            cout<<(char)(ch-2)<<" ";  // for decreasing numbers (reverse triangle)
            ch = ch - 1;
        }
        cout<<endl;
    }
    return 0;
}