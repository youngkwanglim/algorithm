#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
int n, a, b, ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());

    //ret = v[0].first;
    for(auto i : v){;
        if(ret > i.first) ret += i.second;   
        else ret = i.first + i.second;
    }

    cout << ret << '\n';
}