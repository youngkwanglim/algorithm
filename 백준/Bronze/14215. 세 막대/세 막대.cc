#include<bits/stdc++.h>
using namespace std;
int a[3], ret;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    for(int i = 0; i < 3; i++){
        cin >> a[i];
        ret += a[i];
    }
    sort(a, a + 3);

    if(a[0] + a[1] <= a[2]) ret -= (a[2] + 1 - a[0] - a[1]);
    cout << ret << '\n';
}