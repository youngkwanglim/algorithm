#include<bits/stdc++.h>
using namespace std;
int n, ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cin.tie(NULL);
    cin >> n;
    while(n > 0){
        if(n % 2) ret++;
        n /= 2;
    }
    cout << ret << '\n';
}