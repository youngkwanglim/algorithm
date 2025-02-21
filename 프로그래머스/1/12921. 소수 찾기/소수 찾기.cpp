#include <bits/stdc++.h>

using namespace std;

int go(int j){
    if(j == 2 || j == 3) return 1;
    for(int i = 2; i * i <= j; i++){
        if(j % i == 0) return 0;
    }
    return 1;
}

int solution(int n) {
    int ret = 0;
    for(int i = 2; i <= n; i++){
        //if(go(i) == 1) cout << i << '\n';
        ret += go(i);
        //cout << i << '\n';
    }
    return ret;
}