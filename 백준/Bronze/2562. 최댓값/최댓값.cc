#include<bits/stdc++.h>
using namespace std;
int a[10], _max = 0, idx = -1;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    for(int i = 0; i < 9; i++){
        cin >> a[i];
        if(_max < a[i]){
            _max = a[i];
            idx = i;
        }
    }
    cout << _max << '\n' << idx + 1;
}