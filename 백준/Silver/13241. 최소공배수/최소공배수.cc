#include<bits/stdc++.h>
using namespace std;
long long a, b, ret;
long long gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b % a, a);
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b;
    ret = a * b / gcd(a, b);
    cout << ret << '\n';
}