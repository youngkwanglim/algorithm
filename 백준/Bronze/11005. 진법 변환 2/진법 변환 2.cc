#include<bits/stdc++.h>
using namespace std;
int n, b, tmp;
string ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> b;
    while(true){
        tmp = n % b;
        n /= b;
        if(0 <= tmp && tmp <= 9) ret = char('0' + tmp) + ret;
        else ret = char((tmp - 10) + 'A') + ret;
        if(n == 0) break;
    }

    cout << ret << '\n';
}