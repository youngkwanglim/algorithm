#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin >> n;
    for(int i = 1; i <= 2*n - 1; i++){
        if(i <= n){
            for(int j = 0; j < n - i; j++){
                cout << " ";
            }
            for(int j = 1; j <= 2*i - 1; j++){
                cout << "*";
            }
            cout << '\n';
        }
        else{
            for(int j = 0; j < i - n; j++){
                cout << " ";
            }
            for(int j = 1; j <= 2 * (2 * n - i) - 1; j++){
                cout << "*";
            }
            cout << '\n';
        }
    }
}