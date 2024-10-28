#include<bits/stdc++.h>
using namespace std;
int n;
string s;
vector<string> v;
bool cmp(string a, string b){
    if(a.size() == b.size()) return a < b;
    return a.size() < b.size();
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), cmp);
    v.erase(unique(v.begin(), v.end()), v.end());
    for(string a : v){
        cout << a << '\n';
    }
}