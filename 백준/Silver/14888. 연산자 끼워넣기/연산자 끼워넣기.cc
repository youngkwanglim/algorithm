#include<bits/stdc++.h>
using namespace std;
int n, a[13], ret_max = -1987654321, ret_min = 1987654321, plu, minu, mult, divi;
void go(int idx, int cur, int plu, int minu, int mult, int divi){
    if(idx == n - 1){
        ret_max = max(cur, ret_max);
        ret_min = min(cur, ret_min);
    }

    if(plu) go(idx + 1, cur + a[idx + 1], plu - 1, minu, mult, divi);
    if(minu) go(idx + 1, cur - a[idx + 1], plu, minu - 1, mult, divi);
    if(mult) go(idx + 1, cur * a[idx + 1], plu, minu, mult - 1, divi);
    if(divi) go(idx + 1, cur / a[idx + 1], plu, minu, mult, divi - 1);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> plu >> minu >> mult >> divi;
    go(0, a[0], plu, minu, mult, divi);
    cout << ret_max << '\n' << ret_min;
}