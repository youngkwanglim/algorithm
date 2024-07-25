#include <bits/stdc++.h>
using namespace std;

string s, ret, ret2, tmp;
int cnt[26], cnt_hol;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    // 대문자로만 최대 50글자
    cin >> s;
    for (int i = 0; i < s.size(); i++){
        cnt[s[i] - 'A']++;
    }

    // 홀수 개수인 문자의 개수를 세기
    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2 != 0) cnt_hol++;
    } 

    // 홀수 개수인 문자가 1개를 초과하면 팰린드롬을 만들 수 없음
    if (cnt_hol > 1) {
        cout << "I'm Sorry Hansoo" << '\n';
        return 0;
    }

    // 문자열의 짝수 길이와 홀수 길이에 따른 팰린드롬 만들기
    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2 == 0) {
            while(cnt[i] > 0) {
                ret += (i + 'A');
                cnt[i] -= 2;
            }
        } else {
            while(cnt[i] > 1) {
                ret += (i + 'A');
                cnt[i] -= 2;
            }
            tmp = (i + 'A'); // 홀수 개수인 문자 저장
        }
    }

    // 반대쪽 문자열 만들기
    ret2 = ret; 
    reverse(ret2.begin(), ret2.end());

    // 최종 결과 출력
    if (tmp.empty()) {
        cout << ret << ret2 << '\n';
    } else {
        cout << ret << tmp << ret2 << '\n';
    }

    return 0;
}
