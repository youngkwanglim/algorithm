#include<bits/stdc++.h>
using namespace std;
int n, m, a, b, visited[10004], tmp[10004], mx;
vector<int> adj[10004];
int dfs(int here){
	visited[here] = 1;
	int ret = 1;
	for(int there : adj[here]){
		if(visited[there]) continue;
		ret += dfs(there);
	}
	return ret;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	// A가 B를 신뢰하면 B만 해킹하면 A도 해킹가능
	cin >> n >> m;
	 
	for(int i = 0; i < m; i++){
		cin >> a >> b;
		adj[b].push_back(a);
	}
	
	for(int i = 1; i <= n; i++){
		fill(&visited[0], &visited[0] + 10004, 0);
		tmp[i] = dfs(i);
		mx = max(tmp[i], mx);
	}
	
	for(int i = 1; i <= n; i++){
		if(mx == tmp[i]) cout << i << " ";
	}
	
}