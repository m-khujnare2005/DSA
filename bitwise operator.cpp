#include <iostream>
using namespace std;
int main(){
    int a = 6; // 0101 in binary
    int b = 10; // 0011 in binary

    cout << (a & b) << endl; // Bitwise AND
    cout << (a | b) << endl; // Bitwise OR
    cout << (a ^ b) << endl; // Bitwise XOR
    cout << (a << 1) << endl; // Left shift
    cout << (b >> 1) << endl; // Right shift

    cout<< (b << 2) << endl; // Left shift by 2
    cout<< (b >> 1) << endl; // Right shift by 1

    return 0;
}
