#include<bits/stdc++.h>
using namespace std;
int n, m, visited[54][54], ret;
char a[54][54];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int bfs(int y, int x){
	queue<pair<int, int>> q;
	visited[y][x] = 1;
	q.push({y, x});
	while(q.size()){
		tie(y, x) = q.front(); q.pop();
		for(int i = 0; i < 4; i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= n || nx < 0 || nx >=m || visited[ny][nx]) continue;
			if(a[ny][nx] == 'W') continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ny, nx});
		}
	}
	int _max = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			_max = max(_max, visited[i][j]);
		}
	}
	return _max - 1;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	// 육지 L, 바다 W
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
//	for(int i = 0; i < n; i++){
//		for(int j = 0; j < m; j++){
//			cout << a[i][j] << " ";
//		}
//		cout << "\n";
//	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == 'L') {
				fill(&visited[0][0], &visited[0][0] + 54*54, 0);
				ret = max(ret, bfs(i, j));
			}
		}
	}
	
	cout << ret << '\n';
}