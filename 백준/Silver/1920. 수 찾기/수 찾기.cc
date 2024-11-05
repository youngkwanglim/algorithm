#include<bits/stdc++.h>
using namespace std;
int n, m, a[100004];
vector<int> v;
map<int, int> mp;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> m;
        mp[m] = 1;
    }
    cin >> n;
    while(n--){
        cin >> m;
        if(mp.find(m) == mp.end()) cout << 0 << '\n';
        else cout << 1 << '\n';
    }
}