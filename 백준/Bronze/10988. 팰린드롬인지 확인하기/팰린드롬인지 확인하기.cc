#include<bits/stdc++.h>
using namespace std;
string s1, s2;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> s1;
    s2 = s1;
    reverse(s2.begin(), s2.end());
    if (s1 == s2) cout << 1;
    else cout << 0;

    return 0;
}