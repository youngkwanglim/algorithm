#include<bits/stdc++.h>
using namespace std;
int n, a;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for(int i : v){
        cout << i << '\n';
    }
}