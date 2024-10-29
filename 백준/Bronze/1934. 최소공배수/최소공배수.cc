#include<bits/stdc++.h>
using namespace std;
int a, b, n, _min;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> a >> b;
        _min = min(a, b);
        int tmp = 1;
        for(int i = 2; i <= _min; i++){
            if(a % i == 0 && b % i == 0) tmp = i;
        }
        cout << a * b / tmp << '\n';
    }
}