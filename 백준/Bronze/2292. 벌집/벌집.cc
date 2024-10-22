#include<bits/stdc++.h>
using namespace std;
int n, ret = 1, tmp, sum = 1;
int main(){
    cin >> n;
    if(n == 1) cout << 1 << '\n';
    else{
        while(true){
            ret++;
            tmp += 6;
            if((sum + 1) <= n && n <= sum + tmp) break;
            sum += tmp;
        }
        cout << ret << '\n';
    }
}