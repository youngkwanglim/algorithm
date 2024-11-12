#include<bits/stdc++.h>
using namespace std;
int n, k, m, v, c, cnt;
long long ret;
priority_queue<int, vector<int>> pq;
vector<pair<int, int>> vv;
vector<int> bag;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> m >> v;
        vv.push_back({m, v});
    }
    for(int i = 0; i < k; i++){
        cin >> c;
        bag.push_back(c);
    }
    sort(vv.begin(), vv.end()); // 무게 작은거부터 순으로 정렬
    sort(bag.begin(), bag.end()); // 가방 최대 무게 작은 순서부터 정렬
    int j = 0;
    // 무게 가치
    for(int i : bag){
        while(j < n && vv[j].first <= i){
            pq.push(vv[j].second);
            j++;
        }
        cnt++;
        if(pq.size()){
            ret += pq.top();
            pq.pop();
        }
    }
    cout << ret << '\n';
}