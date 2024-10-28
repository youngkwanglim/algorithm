#include<bits/stdc++.h>
using namespace std;
int n, cnt[20000004], tmp, m;
vector<int> v;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> tmp;
        cnt[tmp + 10000000]++;
    }

    cin >> m;
    while(m--){
        cin >> tmp;
        if(cnt[tmp + 10000000]) cout << 1 << " ";
        else cout << 0 << " ";
    }
    cout << '\n';
}