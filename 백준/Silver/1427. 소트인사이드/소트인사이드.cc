#include<bits/stdc++.h>
using namespace std;
string s;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> s;
    for(char c : s){
        v.push_back(c - '0');
    }
    sort(v.rbegin(), v.rend());
    for(int i : v){
        cout << i;
    }
}