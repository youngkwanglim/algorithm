#include<bits/stdc++.h>
using namespace std;
int n, a;
vector<int> v;
vector<int> v2;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        v.push_back(a);
    }
    v2 = v;

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i : v2){
        cout << lower_bound(v.begin(), v.end(), i) - v.begin() << " ";
    }
    cout << '\n';
}