#include<bits/stdc++.h>
using namespace std;
int x, y, w, h, ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> x >> y >> w >> h;
    int a = min(x, w - x);
    int b = min(y, h - y);
    ret = min(a, b);
    cout << ret << '\n';
}    