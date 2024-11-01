#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
int n, p, d, ret;
priority_queue<int> pq;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
   for(int i = 0; i < n; i++){
        cin >> p >> d;
        v.push_back({d, p});
    }
    sort(v.rbegin(), v.rend());
    int j = 0;
    for(int i = 10000; i >= 1; i--){
        //cout << v[j].first << '\n';
        //cout << i << '\n';
        while(j < n && v[j].first == i){
            //cout << j << "때 실행" << '\n';
            //cout << "실행\n";
            pq.push(v[j++].second);
        }
        if(pq.size()) {
            ret += pq.top();
            pq.pop();
        }
    }

    cout << ret << '\n';
}