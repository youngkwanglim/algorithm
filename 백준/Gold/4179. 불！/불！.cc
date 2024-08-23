#include<bits/stdc++.h>
using namespace std;
const int INF = 987654321;
int r, c, my, mx, visited[1004][1004], fire[1004][1004], y, x, ret;
char a[1004][1004];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> r >> c;
	queue<pair<int, int>> q;
	fill(&fire[0][0], &fire[0][0] + 1004 * 1004, INF);
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> a[i][j];	
			if(a[i][j] == 'F'){
				fire[i][j] = 1; q.push({i,j});
			}else if(a[i][j] == 'J'){
				my = i; mx = j;
			}
		}
	}

	while(q.size()){
		tie(y,x) = q.front(); q.pop();
		for(int i=0; i<4; i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
			if(fire[ny][nx] != INF || a[ny][nx] == '#') continue;
			fire[ny][nx] = fire[y][x] + 1;
			q.push({ny, nx});
		}
	}

	visited[my][mx] = 1;
	q.push({my, mx});
		while(q.size()){
		tie(y,x) = q.front(); q.pop();
		if(x == c - 1 || y == r - 1 || x == 0 || y == 0){
			ret = visited[y][x];
			break;
		}		
		for(int i=0; i<4; i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
			if(visited[ny][nx] || a[ny][nx] == '#') continue;
			if(fire[ny][nx] <= visited[y][x] + 1) continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ny, nx});
		}
	}
	if(ret) cout << ret << '\n';
	else cout << "IMPOSSIBLE\n";				
} 