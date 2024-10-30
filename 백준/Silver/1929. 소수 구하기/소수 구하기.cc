#include<bits/stdc++.h>
using namespace std;
int n, m;

bool so(int a){
    if(a <= 1) return false;
    if(a == 2) return true;
    if(a % 2 == 0) return false;
    for(int i = 3; i * i <= a; i++){
        if(a % i == 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> m >> n;
    for(int i = m; i <= n; i++){
        if(so(i)) cout << i << '\n';
    }
}