#include<bits/stdc++.h>
using namespace std;
bool che[4000004];
int n, a[2000004], p, lo, hi, ret, sum;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 2; i <= n; i++){
        if(che[i]) continue;
        for(int j = 2 * i; j<=n; j+=i){
            che[j] = 1;
        }
    }
    for(int i = 2; i <= n; i++){
        if(!che[i]) a[p++] = i;
    }
    while(true){
        if(sum >= n) sum -= a[lo++];
        else if(hi == p) break;
        else sum += a[hi++];
        if(sum == n) ret++;
    }
    cout << ret << '\n';
}