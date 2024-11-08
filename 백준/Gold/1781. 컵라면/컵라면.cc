#include<bits/stdc++.h>
using namespace std;
int n, ret, dead, cup;
vector<pair<int, int>> v;
priority_queue<int> pq;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> dead >> cup;
        v.push_back({dead, cup});
    }
    sort(v.rbegin(), v.rend());
    int j = 0;
    for(int i = n; i > 0; i--){
        while(j < n && v[j].first == i){
            pq.push(v[j].second);
            j++;
        }
        if(pq.size()){
            ret += pq.top();
            pq.pop();
        }
    }
    cout << ret << '\n';
}