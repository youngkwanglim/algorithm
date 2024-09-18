#include<bits/stdc++.h>
using namespace std;
int n;
double aa[1004], tmp, _max, sum;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        _max = max(_max, tmp);
        aa[i] = tmp;
    }
    for(int i = 0; i < n; i++){
        aa[i] = aa[i] / _max * 100;
        sum += aa[i];
    }
    cout << sum / n;
}