#include<bits/stdc++.h>
using namespace std;
int n = 2, ret, dot, tmp;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> tmp;
    for(int i = 0; i <= tmp; i++){
        dot = pow(n, 2);
        n = n + n - 1;
    }
    cout << dot << '\n';
}