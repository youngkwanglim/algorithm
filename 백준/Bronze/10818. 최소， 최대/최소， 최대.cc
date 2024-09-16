#include<bits/stdc++.h>
using namespace std;
int _max = -1000000, _min = 1000000, n, a;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        _max = max(_max, a);
        _min = min(_min, a);
    }
    cout << _min << " " << _max;
}