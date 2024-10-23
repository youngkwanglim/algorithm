#include<bits/stdc++.h>
using namespace std;
int a, b, cnt;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b;
    int i;
    for(i = 1; i <= a; i++){
        if(a % i == 0) cnt++;
        if(cnt == b) break;
    }
    if(i > a) cout << 0 << '\n';
    else cout << i << '\n';
}