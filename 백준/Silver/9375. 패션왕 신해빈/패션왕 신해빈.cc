#include<bits/stdc++.h>
using namespace std;
int n, m, count[30], ret;
string s1, s2;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 테스트 케이스 갯수 입력
    cin >> n;
    // 의상 수 입력 후 의상이름과 종류 입력
    for (int i = 0; i < n; i++){
        cin >> m;
        map<string, int> mp;
        for (int j = 0; j < m; j++){
            cin >> s1 >> s2;
            mp[s2]++; // 이거 처음 접근해서 0이 된뒤에 ++해서 1되는지 확인 해보기
        }
        // 의상 수를 조합으로 계산해서 -1 해주면 됨.(단 같은 종류 의상은 하나만 가능)
        if (mp.size() == 0) cout << 0 << '\n';
        else{
            ret = 1;
            for (auto it : mp){
                ret *= (it.second + 1);
                //cout << "ret : " << ret << '\n';
            }
            cout << ret - 1  << '\n';
        }
        // -> 종류별로 나누고 종류별 갯수 +1 해줘서 곱해준다음 마지막에 -1만 해주면됨.
    }
    return 0;
}