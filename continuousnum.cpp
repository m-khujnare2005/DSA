//output: 1 2 3 4 5 
//        6 7 8 9 10 
//        11 12 13 14 15 
//        16 17 18 19 20 
//        21 22 23 24 25




#include <iostream>
using namespace std;
int main(){
    int n = 4;
    int num = 1;    // outer loop outside because for continuous number pattern we need to maintain the value of num and it should not be reset to 1 for every row

    for (int i=0;i<=n;i++){
        for (int j=0;j<=n;j++){
            cout<<num<<" ";
            num++;

        }
        cout<<endl;
    }

    return 0;
}