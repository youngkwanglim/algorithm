#include<bits/stdc++.h>
using namespace std;
int a, b, b1, b2, b3;
int main(){
    cin >> a >> b;
    b1 = b % 10; //5
    b2 = ((b - b1) % 100) / 10; // 8
    b3 = ((b - b2 * 10 - b1) % 1000) / 100; // 3
    cout << a * b1 << '\n';
    cout << a * b2 << '\n';
    cout << a * b3 << '\n';
    cout << a * b << '\n';
}