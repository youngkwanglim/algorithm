#include<bits/stdc++.h>
using namespace std;
int n, m, ret;
string s;
vector<string> v;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    while(n--){
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end());

    while(m--){
        cin >> s;
        if(binary_search(v.begin(), v.end(), s)) ret++;
    }
    cout << ret << '\n';
}