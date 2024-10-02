#include<bits/stdc++.h>
using namespace std;
int x, tmp, ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> x;
    for(int i = 6; i >= 0; i--){
        if(((1 << i) & x) == (1 << i)) ret++;
    }
    cout << ret << '\n';
}