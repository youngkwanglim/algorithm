#include<bits/stdc++.h>
using namespace std;
long long cnt;
int n;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n - 1; i++){
        for(int j = i + 1; j <= n; j++){
            cnt++;
        }
    }
    cout << cnt << '\n' << 2 << '\n';
}