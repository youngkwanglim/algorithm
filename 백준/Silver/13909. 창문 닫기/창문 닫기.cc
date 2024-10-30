#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    // for(int i = 1; i * i <= n; i++){
        
    // }
    ll i = 1;
    while(true){
        if(i * i > n) break;
        i++;
    }
    i--;
    cout << i << '\n';
}