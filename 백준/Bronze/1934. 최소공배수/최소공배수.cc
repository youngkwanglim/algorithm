#include<bits/stdc++.h>
using namespace std;
int a, b, n, _min;
int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b % a, a);
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> a >> b;
        cout << a * b / gcd(a, b) << '\n';
    }
}