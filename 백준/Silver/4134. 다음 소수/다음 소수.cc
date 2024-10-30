#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, tmp;

bool so(ll a){
    if(a <= 1) return false;
    if(a == 2) return true;
    if(a % 2 == 0) return false;
    for(ll i = 3; i * i <= a; i++){
        if(a % i == 0) return false;
    }
    return true;
}

// 4000000000
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> tmp;
        for(ll i = tmp; i >= tmp; i++){
            if(so(i)){
                cout << i << '\n';
                break;
            }
        }
    }
}