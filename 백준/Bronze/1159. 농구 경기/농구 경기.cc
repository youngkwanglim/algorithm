#include<bits/stdc++.h>
using namespace std;
int n, sum;
int cnt[26];
vector<char> ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 선수 수(n)을 입력받고
    cin >> n;
    // 그 이름들을 입력받고
    string name[n];
    for (int i = 0 ; i < n ; i++) {
        cin >> name[i];
        // 성의 첫글자 카운트 한다.
        cnt[name[i][0] - 'a']++;
    }
    // 그리고 5명 이상이면 이름 사전순으로 출력하고
    for (int i = 0; i < 26; i++){
        if (cnt[i] >= 5) { 
            ret.push_back(i + 'a'); sum++;
        }
    }
    
    if (sum > 0){
        sort(ret.begin(), ret.end());
        for (char i : ret) cout << i;
    }
    // 5명 미만이면 "PREDAJA" 출력.
    else cout << "PREDAJA";
    return 0;
}