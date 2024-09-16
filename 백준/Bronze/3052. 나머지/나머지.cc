#include<bits/stdc++.h>
using namespace std;
int a[46], tmp, cnt;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    for(int i = 0; i < 10; i++){
        cin >> tmp;
        if(a[tmp % 42] == 0) cnt++;
        a[tmp % 42]++;
    }
    cout << cnt;
}