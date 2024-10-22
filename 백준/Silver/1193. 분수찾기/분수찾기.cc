#include<bits/stdc++.h>
using namespace std;
int n, psum = 1, cnt = 1;
int main(){
    cin >> n;
    while(true){
        if(n <= psum){
            break;
        }
        cnt++; // 갯수 증가
        psum += cnt; // 누적합
    }
    int k = psum - n + 1;
    if(cnt % 2) cout << k << "/" << cnt - k + 1 << '\n';
    else cout << cnt - k + 1 << "/" << k << '\n';

}