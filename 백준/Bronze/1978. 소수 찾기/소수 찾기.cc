#include<bits/stdc++.h>
using namespace std;
int n, m, ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m;
        if(m == 1) continue;
        int cnt = 0;
        for(int j = 2; j <= m; j++){
            if(m % j == 0) cnt++;
        }
        if(cnt == 1) ret++;
    }
    cout << ret << '\n';
}