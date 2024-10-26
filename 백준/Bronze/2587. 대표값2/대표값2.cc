#include<bits/stdc++.h>
using namespace std;
int n = 5, sum, a;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    while(n--){
        cin >> a;
        v.push_back(a);
        sum += a;
    }
    sort(v.begin(), v.end());
    cout << sum / 5 << '\n' << v[2] << '\n';
}