#include<bits/stdc++.h>
using namespace std;
string s;
int cnt[26], ret, tmp, _max;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> s;
    for(char c : s){
        if('a' <= c && c <= 'z') cnt[c - 'a']++;
        if('A' <= c && c <= 'Z') cnt[c - 'A']++;
    }
    // cnt 순회하면서 최대를 찾아
    // 그리고 그게 중복되면 안됨. 
    for(int i = 0; i < 26; i++){
        if(_max < cnt[i]){
            _max = cnt[i];
            ret = i;
            tmp = 0;
        }
        else if(_max == cnt[i]){
            tmp++;
        }
    }
    if(tmp) cout << "?";
    else cout << (char)('A' + ret);
}