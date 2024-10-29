#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a1, a2, b1, b2;
ll ret1, ret2;
ll gcd(ll a, ll b){
    if(a == 0) return b;
    return gcd(b % a, a);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a1 >> a2 >> b1 >> b2;
    ll tmp1 = a1 * b2 + b1 * a2;
    ll tmp2 = a2 * b2;
    ll tmp3 = 0;
    if (tmp1 > tmp2) tmp3 = gcd(tmp2, tmp1);
    else tmp3 = gcd(tmp1, tmp2);
    cout << tmp1 / tmp3 << " " << tmp2 / tmp3 << '\n';;
}