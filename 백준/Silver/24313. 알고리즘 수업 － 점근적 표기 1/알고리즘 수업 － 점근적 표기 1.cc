#include<bits/stdc++.h>
using namespace std;
int a1, a0, c, n0, ret = 1;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a1 >> a0 >> c >> n0;
    if(c >= a1){
        if(a1 * n0 + a0 > c * n0){
            ret = 0;
        }
    }
    else{
        ret = 0;
    }

    cout << ret << '\n';
}