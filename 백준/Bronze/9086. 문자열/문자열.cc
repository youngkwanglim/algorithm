#include<bits/stdc++.h>
using namespace std;
string s;
int t;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> s;
        cout << s[0] << s[s.size() - 1] << '\n';
    }
}