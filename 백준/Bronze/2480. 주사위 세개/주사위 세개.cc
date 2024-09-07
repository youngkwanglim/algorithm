#include <bits/stdc++.h>
using namespace std;
int a, b, c, ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b >> c;
    if(a == b && a == c) ret = 10000 + a * 1000;
    else if(a == b) ret = 1000 + a * 100;
    else if(a == c) ret = 1000 + a * 100;
    else if(b == c) ret = 1000 + b * 100;
    else if(a != b && b != c) ret = max(max(a, b), c) * 100;
    cout << ret;
}