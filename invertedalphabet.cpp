//output:
//      A B C D 
//        E F G 
//          H I 
//            J 


#include <iostream>
using namespace std;
int main(){
    int n = 4;
    char ch = 'A';

    for (int i=0;i<n;i++){
        for (int j=0;j<i;j++){
            cout<<"  ";   // for spaces
        
        }
        
        for (int j=0;j<n-i;j++){  // for numbers
            cout<<(ch)<<" ";
            ch = ch + 1;  
            
        }

        cout<<endl;
    }
    return 0;
}