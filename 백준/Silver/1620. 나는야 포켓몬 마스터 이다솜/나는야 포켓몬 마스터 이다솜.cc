#include<bits/stdc++.h>
using namespace std;
int n, m;
string s;
map<string, int> mp;
map<int, string> mp2;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 전체 도감갯수랑 문제 갯수 입력
    cin >> n >> m;
    //n만큼 도감 문자열 입력 - 1부터 시작
    for (int i = 1; i <= n; i++){
        cin >> s;
        mp[s] = i;
        mp2[i] = s;
    }

    //숫자가 들어오면 이름, 이름이 들어오면 숫자 출력
    for (int i = 0; i < m ; i++){
        cin >> s;
        if(atoi(s.c_str()) == 0){
            cout << mp[s] << '\n';
        } else{
            cout << mp2[atoi(s.c_str())] << '\n';
        }
    }

    return 0;
}