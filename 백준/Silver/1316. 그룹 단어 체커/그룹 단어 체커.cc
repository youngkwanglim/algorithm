#include<bits/stdc++.h>
using namespace std;
int n, ret, cnt[26], flg;
string s;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> s;
        flg = 0;
        fill(cnt, cnt + 26, 0);
        cnt[s[0] - 'a']++;
        for(int i = 1; i < s.size(); i++){
            if(s[i] == s[i - 1]) {
                //cout << "동일"<< '\n';
                continue;
            }
            cnt[s[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(cnt[i] >= 2) {
                flg = 1;
                break;
            }
        }
        if(flg == 0) ret++;
    }
    cout << ret << '\n';
}