#include<bits/stdc++.h>
using namespace std;
int m, n, k, cnt, s;
vector<int> ret;
int a[104][104];
int visited[104][104];
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void dfs(int y, int x){
	visited[y][x] = 1;
	for(int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= m || nx >= n) continue;
		if(a[ny][nx] == 0 && visited[ny][nx] == 0){
			s++;
			dfs(ny, nx);
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> m >> n >> k;
	for (int i = 0; i < k; i++){
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for(int j = y1; j < y2; j++){
			for(int h = x1; h < x2; h++){
				a[j][h] = 1;
			}
		}
	}
	
	//디버깅  
//	for (int i = 0; i < m; i++){
//		for(int j = 0; j < n; j++){
//			cout << a[i][j] << " "; 
//		}
//		cout << "\n";
//	}
	
	for (int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] == 0 && visited[i][j] == 0){
				s = 1;
				dfs(i, j);
				cnt++;
				ret.push_back(s);
			}
		}
	}
	
	sort(ret.begin(), ret.end());
	cout << cnt << '\n';
	for (int a : ret){
		cout << a << ' ';
	}
}