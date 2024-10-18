#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, tmp, ret;
// 첫번째는 키, 두번째는 동일한 키 연속중복횟수
stack<pair<ll, ll>> s;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> tmp;
        int cnt = 1;
        while(s.size() && s.top().first <= tmp){
            ret += s.top().second;
            if(s.top().first == tmp){
                cnt = s.top().second + 1;
            } else{
                cnt = 1;
            }
            s.pop();
        }
        if(s.size()) ret++;
        s.push({tmp, cnt});
    }
    cout << ret << '\n';
}