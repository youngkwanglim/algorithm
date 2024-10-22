#include<bits/stdc++.h>
using namespace std;
string s;
int ret, n, tmp = 1;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> s >> n;
    for(int i = s.size() - 1; i >= 0; i--){
        int num = 0;
        if(s[i] >= '0' && s[i] <= '9') num = s[i] - '0';
        else num = (s[i] - 'A') + 10;
        ret += num * tmp;
        tmp *= n; 
    }
    cout << ret << '\n';
}