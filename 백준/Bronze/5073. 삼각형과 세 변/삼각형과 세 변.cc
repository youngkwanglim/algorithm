#include<bits/stdc++.h>
using namespace std;
int a[3], _max, _max_i, tmp1, tmp2;
string s;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    while(true){
        cin >> a[0] >> a[1] >> a[2];
        if(a[0] == 0 && a[1] == 0 && a[2] == 0) break;

        _max = 0;
        for(int i = 0; i < 3; i++){
            if(_max < a[i]){
                _max = a[i];
                _max_i = i;
            }
        }
        
        int sum =0;
        for(int i = 0; i < 3; i++){
            if(i != _max_i) sum += a[i];
        }

        if(_max >= sum){
            s = "Invalid";
        }
        else if(a[0] == a[1] && a[1] == a[2]) s = "Equilateral";
        else if(a[0] != a[1] && a[1] != a[2] && a[2] != a[0]) s =  "Scalene";
        else s = "Isosceles";

        cout << s << '\n';
    }
}