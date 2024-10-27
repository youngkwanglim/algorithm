#include<bits/stdc++.h>
using namespace std;
int n, a, b;
vector<pair<int, int>> v;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    for(pair<int, int> k : v){
        cout << k.first << " " << k.second << '\n';
    }
}