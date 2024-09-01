#include<bits/stdc++.h>
using namespace std;
int m, n, a[104][104], visited[104][104], cnt, cnt2;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1}; 
vector<pair<int, int>> v;

void dfs(int y, int x){
	visited[y][x] = 1;
	if(a[y][x] == 1){
		v.push_back({y,x});
		return;
	}
	for(int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= m || nx < 0 || nx >= n || visited[ny][nx]) continue;
		dfs(ny, nx);
	}
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> m >> n;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	while(true){
		fill(&visited[0][0], &visited[0][0] + 104*104, 0);
		v.clear();
		dfs(0,0);
		cnt2 = v.size();
		for(pair<int, int> b : v){
			a[b.first][b.second] = 0;
		}
		bool flag = 0;
		for(int i = 0; i < m; i++){
			for(int j = 0; j < n; j++){
				if(a[i][j] == 1) flag = 1; 
			}			
		}
		cnt++;
		if(flag == 0) break;
	}
	cout << cnt << '\n' << cnt2 << '\n';
}