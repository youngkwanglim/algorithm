#include<bits/stdc++.h>
using namespace std;
string s;
int a[26];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> s;
    fill(a, a + 26, -1);
    for(int i = 0; i < s.size(); i++){
        if(a[s[i] - 'a'] == -1) a[s[i] - 'a'] = i;
    }
    for(int i = 0; i < 26; i++){
        cout << a[i] << " ";
    }
}