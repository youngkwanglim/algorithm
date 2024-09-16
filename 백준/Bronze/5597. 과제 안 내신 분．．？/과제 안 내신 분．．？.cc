#include<bits/stdc++.h>
using namespace std;
int a[34], tmp;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    for(int i = 1; i <= 28; i++){
        cin >> tmp;
        a[tmp]++;
    }
    for(int i = 1; i <= 30; i++){
        if(a[i] == 0) cout << i << "\n";
    }
}