#include<bits/stdc++.h>
using namespace std;
int n, tmp, ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++){
        ret = 0;
        tmp = i;
        ret += tmp;
        while(tmp / 10 >= 1){
            ret += tmp % 10;
            tmp /= 10;
        }
        ret += tmp;
        if(ret == n){
            cout << i << '\n';
            return 0;
        }
    }
    cout << 0 << '\n';
}