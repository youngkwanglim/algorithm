#include<bits/stdc++.h>
using namespace std;
int n, l, r, a[54][54], visited[54][54], ret, sum;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
vector<pair<int, int>> v; 
void changeArea(){
	for(pair<int, int> p : v){
		a[p.first][p.second] = sum / v.size();
	}
}
void dfs(int y, int x){
	visited[y][x] = 1;
	v.push_back({y, x});
	sum += a[y][x];
	for(int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= n || nx < 0 || nx >= n || visited[ny][nx]) continue;
		if(abs(a[ny][nx] - a[y][x]) >= l && abs(a[ny][nx] - a[y][x]) <= r){
			dfs(ny, nx);
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> l >> r;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	//bfs로 이동하면서 차이가 l과 r사이면 옆칸으로 이동하고 그 칸을 vector에 저장
	//그러면 이동이 한번 가능
	// 그 이후에 또 가능한지 이동이 가능한지 확인 이동이 불가하다 하면 이제 끝.
	while(true){
		fill(&visited[0][0], &visited[0][0] + 54*54, 0);
		int flag = 0;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(!visited[i][j]) {
					v.clear();
					sum = 0;
					dfs(i,j);
					if(v.size() > 1){
						changeArea();
						flag++;
					}
				}
			}
		}
		if(!flag) break;
		ret++;
	}
	cout << ret << '\n';
}