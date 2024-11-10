#include<bits/stdc++.h>
using namespace std;
int n, ret = 1, a, b;
vector<pair<int, int>> v;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back({b, a});
    }
    sort(v.begin(), v.end());

    int tmp = v[0].first;
    for(int i = 1; i < n; i++){
        if(tmp <= v[i].second){
            //cout << v[i].first << " "; 
            tmp = v[i].first;
            ret++;
        }
    }

    cout << ret << '\n';
}