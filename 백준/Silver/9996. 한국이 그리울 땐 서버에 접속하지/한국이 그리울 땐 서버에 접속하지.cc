#include<bits/stdc++.h>
using namespace std;
int n, pos;
string s, input, pre, suf;
int main(){
    cin >> n;
    cin >> s;
    pos = s.find("*");
    pre = s.substr(0, pos), suf = s.substr(pos + 1);

    for (int i = 0; i < n; i++) {
        cin >> input;
        if (pre.size() + suf.size() <= input.size() && 
            input.substr(0, pos) == pre && 
            input.substr(input.size() - suf.size()) == suf){
            cout << "DA" << '\n';
        }
        else cout << "NE" << '\n';
    }

    return 0;
}