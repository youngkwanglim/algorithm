#include<bits/stdc++.h>
using namespace std;
int n, a, cnt[10004];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        cnt[a]++;
    }
    for(int i = 1; i <= 10000; i++){
        for(int j = 0; j < cnt[i]; j++){
            cout << i << '\n';
        }
    }
}