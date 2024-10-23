#include<bits/stdc++.h>
using namespace std;
int k, m, sum, ret = 10000;

bool check(int n){
    if(n <= 1) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    for(int i = 3; i * i <= n; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> m >> k;
    for(int i = m; i <= k; i++){
        if(check(i)) {
            sum += i;
            ret = min(ret, i);
        }
    }
    if(sum) cout << sum << '\n' << ret << '\n';
    else cout << -1 << '\n';
}    