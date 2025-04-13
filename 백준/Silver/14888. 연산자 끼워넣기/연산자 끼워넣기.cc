#include<bits/stdc++.h>
using namespace std;
int n, num[14], a, b, c, d, _max = -1000000000, _min = 1000000000;
void go(int cnt, int tmp, int a, int b, int c, int d){
    if(cnt == n - 1){
        _max = max(tmp, _max);
        _min = min(tmp, _min);
        return;
    }
    if(a) go(cnt + 1, tmp + num[cnt + 1], a - 1, b, c, d);
    if(b) go(cnt + 1, tmp - num[cnt + 1], a, b - 1, c, d);
    if(c) go(cnt + 1, tmp * num[cnt + 1], a, b, c - 1, d);
    if(d) go(cnt + 1, tmp / num[cnt + 1], a, b, c, d - 1);
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    cin >> a >> b >> c >> d;
    go(0, num[0], a, b, c, d);
    cout << _max << '\n' << _min << '\n';
}