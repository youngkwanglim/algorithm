#include<bits/stdc++.h>
using namespace std;
const int max_n = 54;
int t, m, n, k, x, y, ret, a[max_n][max_n], visited[max_n][max_n]; 
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void dfs(int y, int x){
	if (visited[y][x] == 1) return;
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];  
		if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
		if (a[ny][nx] == 1) dfs(ny, nx);
	}
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// dfs로 탐색하면서 ret++ 연산으로 계산해주면 될 거 같음
	cin >> t;
	for (int j = 0; j < t; j++){
		cin >> m >> n >> k;
		memset(a, 0, sizeof(a));
		memset(visited, 0, sizeof(visited));
		ret = 0;
		
		for (int i = 0; i < k; i++){
			cin >> x >> y;
			a[y][x] = 1;
		}
//		for (int h = 0; h < n; h++){
//			for (int l = 0; l < m; l++){
//				cout << a[h][l] << " "; 			
//			}
//			cout << '\n';
//		}
		for (int h = 0; h < n; h++){
			for (int l = 0; l < m; l++){
				if (visited[h][l] == 0 && a[h][l] == 1) {
					ret++;
					dfs(h, l);
				}
			}
		}
		cout << ret << '\n';
	}
}