#include<bits/stdc++.h>
using namespace std;
#define prev aaa
#define next bbb
const int max_n = 200004;
int n, k, visited[max_n], prev[max_n], now;
vector<int> v;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;
	queue<int> q;
	q.push(n);
	visited[n] = 1;
	while(q.size()){
		now = q.front(); q.pop();
		if(now == k) break;
		for(int next : {now-1, now+1, now*2}){
			if(next >= max_n || next < 0 || visited[next]) continue;
			visited[next] = visited[now] + 1;
			prev[next] = now;
			q.push(next);
		}
	}
	
	for(int i = k; i != n; i = prev[i]){
		v.push_back(i);
	}
	v.push_back(n);
	cout << visited[k] - 1 << '\n';
	reverse(v.begin(), v.end());
	for(int i : v) cout << i << ' ';
}