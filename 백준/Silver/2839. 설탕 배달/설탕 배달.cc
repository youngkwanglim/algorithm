#include<bits/stdc++.h>
using namespace std;
int n, ret = 987654321;
string s;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i <= 1000; i++){
        for(int j = 0; j <= 1666; j++){
            if(i * 5 + j * 3 == n){
                ret = min(ret, i + j);
            }
        }
    }
    if(ret == 987654321) cout << -1 << '\n';
    else cout << ret << '\n';
}