#include<bits/stdc++.h>
using namespace std;
int a[3];
string s;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    while(true){
        for(int i = 0; i < 3; i++){
            cin >> a[i];
        }
        if(a[0] == 0 && a[1] == 0 && a[2] == 0) break;

        sort(a, a + 3);

        if(a[2] >= a[1] + a[0]) s = "Invalid";
        else if(a[0] == a[1] && a[1] == a[2]) s = "Equilateral";
        else if(a[0] != a[1] && a[1] != a[2] && a[2] != a[0]) s =  "Scalene";
        else s = "Isosceles";

        cout << s << '\n';
    }
}