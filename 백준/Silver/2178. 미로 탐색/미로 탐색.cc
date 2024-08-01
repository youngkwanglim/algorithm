#include<bits/stdc++.h>
using namespace std;
int n, m, ny, nx, y, x;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int a[100][100], visited[100][100];
string s;

void bfs(int y1, int x1){
	//if(visited[y][x]) return;
	queue<pair<int, int>> q;
	visited[y1][x1] = 1;
	q.push({y1, x1});
	while(q.size()){
		tie(y, x) = q.front(); q.pop();
		for (int i = 0; i < 4; i++){
			ny = y + dy[i];
			nx = x + dx[i];
			if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
			if (visited[ny][nx] == 0 && a[ny][nx] == 1){
				visited[ny][nx] = visited[y][x] + 1;
				//cout << ny << " : " << nx << "탐색중\n" << "visited 값 : " << visited[ny][nx] << '\n';	
				q.push({ny, nx});
			}
		}	
	}
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	// 크기를 입력받음
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> s;
		for(int j = 0; j < m; j++){
			a[i][j] = s[j] - '0';
			// cout << i << " : " << j << " --> i랑 j 입력받음\n";
		}
	}
	
//	for (int i = 0; i < n; i++){
//		for(int j = 0; j < m; j++){
//			cout << a[i][j] << " ";
//		}
//		cout << '\n';
//	}

	
	//최단거리 찾기 -> bfs
	bfs(0,0);
	for (int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			//cout << visited[i][j] << " ";
		}
		//cout << '\n';
	}
	cout << visited[n - 1][m - 1] << '\n';
}