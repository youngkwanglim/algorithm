#include<bits/stdc++.h>
using namespace std;
long long s, e, cnt[100004], a[100004], n, ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 길이가 n
    // 1 이상 100000 이하
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    while(e < n){
        if(!cnt[a[e]]){
            cnt[a[e++]]++;
        }
        else{
            ret += (e - s);
            cnt[a[s++]]--;
        }
    }
    ret += (long long)(e - s) * (e - s + 1) / 2;
    cout << ret << '\n';
}   