#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> m;
        v.push_back(m);
    }
    sort(v.begin(), v.end());
    cin >> n;
    while(n--){
        cin >> m;
        if(binary_search(v.begin(), v.end(), m) == 0) cout << 0 << '\n';
        else cout << 1 << '\n';
    }
}