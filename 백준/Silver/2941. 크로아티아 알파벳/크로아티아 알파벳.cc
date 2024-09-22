#include<bits/stdc++.h>
using namespace std;
string s;
int ret;
string a[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> s;
    ret = s.size();
    for(int i = 0; i < 8; i++){
        auto it = s.find(a[i]);
        if(it != string::npos) {
            ret--;
            if(a[i] == "dz=") ret--;
            string s1 = s.substr(0, it);
            string s2 = s.substr(it + a[i].size());
            s = s1 + " " + s2;
            // cout << s << '\n';
            i--;
        }
    }
    cout << ret;
}