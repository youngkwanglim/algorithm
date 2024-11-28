#include<bits/stdc++.h>
using namespace std;
int a, ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n = 5;
    while(n > 0){
        n--;
        cin >> a;
        ret += a * a;
    }
    cout << ret % 10 << '\n';
}