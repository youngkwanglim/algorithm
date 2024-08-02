#include<bits/stdc++.h>
using namespace std;
const int max_n = 104;
int n, a[max_n][max_n], visited[max_n][max_n], cnt, ret, height;
int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void dfs(int y, int x){
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
		if (a[ny][nx] > height && visited[ny][nx] == 0) dfs(ny, nx);
	}
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	
	//dfs로 컴포넌트 구하고 그러면서 그거 값이 제일 큰거를 구해야됨.
	// n번 반복해서 ret 구해야됨  
	for(int i = -1; i <= 100; i++){
		height = i;
		cnt = 0;
		memset(visited, 0, sizeof(visited));
		for(int j = 0; j < n; j++){
			for (int k = 0; k < n; k++){
				if(a[j][k] > height && visited[j][k] == 0){
					dfs(j, k);
					cnt++;
				} 
			}
		}
		if (ret < cnt) ret = cnt;
	}
	
	cout << ret << '\n';
}

