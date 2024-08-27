#include<bits/stdc++.h>
using namespace std;
int n, k, visited[100004], cnt[100004];
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;
	queue<int> q;
	q.push(n);
	visited[n] = 1;
	cnt[n] = 1;
	while(q.size()){
		int a = q.front(); q.pop();
		for(int next : {a - 1, a + 1, a * 2}){
			if(0 <= next && next <= 100000){
				if(!visited[next]){
					q.push(next);
					visited[next] = visited[a] + 1;
					cnt[next] += cnt[a];
				} else if(visited[next] == visited[a] + 1){
					cnt[next] += cnt[a];
				}
			}
		}
	}
	if(n == k) {
		cout << 0 << '\n';
		cout << 1 << '\n';
	}
	else{
		cout << visited[k] - 1 << '\n';
		cout << cnt[k] << '\n';
	}
}