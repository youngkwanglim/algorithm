#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    if(n == 1) return 0;
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            cout << i << '\n';
            n /= i;
            i--;
        }
        if(n == 1) break;
    }
}    