#include<bits/stdc++.h>
using namespace std;
int n, m, tmp;
map<int, int> mp;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> tmp;
        mp[tmp]++;
    }
    // cout << "그다음 단계\n";
    cin >> m;
    while(m--){
        cin >> tmp;
        cout << mp[tmp] << " ";
    }
}