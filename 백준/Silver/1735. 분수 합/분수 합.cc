#include<bits/stdc++.h>
using namespace std;
int a1, a2, b1, b2;
int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b % a, a);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a1 >> a2 >> b1 >> b2;
    int tmp1 = a1 * b2 + b1 * a2;
    int tmp2 = a2 * b2;
    int tmp3 = 0;
    if (tmp1 > tmp2) tmp3 = gcd(tmp2, tmp1);
    else tmp3 = gcd(tmp1, tmp2);
    cout << tmp1 / tmp3 << " " << tmp2 / tmp3 << '\n';;
}