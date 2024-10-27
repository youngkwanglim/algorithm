#include<bits/stdc++.h>
using namespace std;
int n, a, b;
vector<pair<int, int>> v;
bool cmp(pair<int, int> a, pair<int, int> b){
    if(b.second == a.second) return a.first < b.first;
    return b.second > a.second;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it : v){
        cout << it.first << " " << it.second << '\n';
    }
}