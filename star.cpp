//output:
//        1
//      1   1
//    1       1
//      1   1
//        1


#include <iostream>
using namespace std;
int main(){
    int n = 5;
    for (int i=0;i<n;i++){     //top

        for (int j=0;j<n-i-1;j++){    //spaces
            cout<<"  ";

        }
        cout<<"* ";   // star
        if( i != 0){   // for spaces between stars
            for (int j=0;j<2*i-1;j++){
                cout<<"  ";
            }
            cout<<"* ";   // star
        }
        cout<<endl;
    }
    
    
    //bottom
    for (int i=0;i<n-1;i++){  
         for (int j=0;j<i+1;j++){    //spaces
            cout<<"  ";   
        }
        cout<<"* ";   // star
        if( i != n-2){   // for spaces between stars
            for (int j=0;j<2*(n-i-1)-1;j++){
                cout<<"  ";
            }
            cout<<"* ";   // star


        }
        cout<<endl;
    }
    return 0;
}