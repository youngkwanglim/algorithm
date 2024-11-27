#include<bits/stdc++.h>
using namespace std;
int n, ret, cnt[104];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <=9; j++){
            cnt[i * j] = 1;
        }
    }
    cin >> n;
    if(cnt[n]) cout << 1 << '\n';
    else cout << 0 << '\n';
}