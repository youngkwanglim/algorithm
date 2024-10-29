#include<bits/stdc++.h>
using namespace std;
int n, m, cnt;
string s;
map<string, int> mp;
vector<string> v;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    while(n--){
        cin >> s;
        mp[s]++;
    }
    while(m--){
        cin >> s;
        mp[s]++;
    }
    for(auto it : mp){
        if(it.second == 2){
            cnt++;
            v.push_back(it.first);
        }
    }
    cout << cnt << '\n';
    for(string a : v){
        cout << a << '\n';
    }
}