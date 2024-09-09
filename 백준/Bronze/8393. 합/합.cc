#include <bits/stdc++.h>
using namespace std;
int a, ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> a;
    for(int i = 1; i <= a; i++){
        ret += i; 
    }
    cout << ret << '\n';
}