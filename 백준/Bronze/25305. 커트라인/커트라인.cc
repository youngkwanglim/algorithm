#include<bits/stdc++.h>
using namespace std;
int n, k, a;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    while(n--){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    cout << v[k - 1] << '\n';
}