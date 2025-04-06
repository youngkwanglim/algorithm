#include<bits/stdc++.h>
using namespace std;
int n, l, a, b, ret, last;
vector<pair<int,int>> v;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> l;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back({a,b}); 
    }
    sort(v.begin(), v.end());
    // for(auto it : v){
    //     a = it.first;
    //     b = it.second;
    //     cout << a << " , " << b << '\n';
    // }
    for(auto it : v){
        tie(a, b) = it;
        if(last > a) a = last;
        int tmp = (b - a) / l;
        if((b - a) % l > 0) tmp += 1;
        ret += tmp;
        last =  a + tmp * l ;
    }
    cout << ret << '\n';
}