#include<bits/stdc++.h>
using namespace std;
int a, b, v, sum, ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> v;
    v -= a;
    ret = v / (a - b);
    if(v % (a - b)) ret++;
    cout << ret + 1 << '\n';
}