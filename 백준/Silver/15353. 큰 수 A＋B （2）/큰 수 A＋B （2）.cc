#include<bits/stdc++.h>
using namespace std;
string s1, s2, ret;
int sum;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 문자열로 계산해야될듯
    cin >> s1 >> s2;
    while(s1.size() || s2.size() || sum){
        if(s1.size()){
            sum += s1.back() - '0';
            s1.pop_back();
        }
        if(s2.size()){
            sum += s2.back() - '0';
            s2.pop_back();
        }
        ret += ((sum % 10) + '0');
        sum /= 10;
    }
    reverse(ret.begin(), ret.end());
    cout << ret << '\n';
}