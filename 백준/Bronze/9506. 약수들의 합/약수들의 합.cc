#include<bits/stdc++.h>
using namespace std;
int n, cnt, sum;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    while(true){
        cin >> n;
        if(n == -1) break;
        vector<int> v;
        sum = 0;
        for(int i = 1; i < n; i++){
            if(n % i == 0){
                sum += i;
                v.push_back(i);
            }
        }
        if(sum == n){
            cout << n << " = ";
            for(int i = 0; i < v.size(); i++){
                cout << v[i];
                if(i == v.size() - 1) break;
                cout << " + ";
            }
        }
        else{
            cout << n << " is NOT perfect.";
        }
        cout << '\n';
    }
}