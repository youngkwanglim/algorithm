#include<bits/stdc++.h>
using namespace std;
int n, a[3], visited[64][64][64];
int step[6][3] = {{9,3,1},
				{9,1,3},
				{3,9,1},
				{3,1,9},
				{1,3,9},
				{1,9,3}};
struct A{
	int a, b, c;
};
queue<A> q;
int solve(int a, int b, int c){
	visited[a][b][c] = 1;
	q.push({a, b, c});
	while(q.size()){
		int x = q.front().a;
		int y = q.front().b;
		int z = q.front().c;
		q.pop();
		if(visited[0][0][0]) break;
		for(int i = 0; i < 6; i++){
			int nx = max(0, x - step[i][0]);
			int ny = max(0, y - step[i][1]);
			int nz = max(0, z - step[i][2]);
			if(visited[nx][ny][nz]) continue;
			visited[nx][ny][nz] = visited[x][y][z] + 1;
			q.push({nx, ny, nz});
		}
	}
	return visited[0][0][0] - 1;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << solve(a[0], a[1], a[2]) << '\n';
}