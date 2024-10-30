#include<bits/stdc++.h>
using namespace std;
int n, tmp, a[100004], k, sum;
vector<int> v;
int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b % a, a);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i == 1){
            sum += a[i] - a[i - 1];
            k = a[i] - a[i - 1];
        }
        else if(i >= 2){
            sum += a[i] - a[i - 1];
            if(k < a[i] - a[i - 1]){
                k = gcd(k, a[i] - a[i - 1]);
            }
            else{
                k = gcd(a[i] - a[i - 1], k);
            }
        }
    }

    cout << sum / k - (n - 1) << '\n';
}