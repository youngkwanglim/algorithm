#include<bits/stdc++.h>
using namespace std;
int n, k, visited[100004], ret;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;
	queue<int> q;
	q.push(n);
	visited[n] = 1;
	while(q.size()){
		int a = q.front();
		q.pop();
		if(a + 1 <= 100000 && (!visited[a + 1] || visited[a + 1] == visited[a] + 1)){
			visited[a + 1] = visited[a] + 1;
			q.push(a + 1);
			if(a + 1 == k) ret++;
		} 
		if(a - 1 >= 0 && (!visited[a - 1] || visited[a - 1] == visited[a] + 1)){
			visited[a - 1] = visited[a] + 1;
			q.push(a - 1);
			if(a - 1 == k) ret++;
		}
		if(2 * a <= 100000 && (!visited[2 * a] || visited[2 * a] == visited[a] + 1)){
			visited[2 * a] = visited[a] + 1;
			q.push(a * 2);
			if(2 * a == k) ret++;
		}
	}
	if(n == k) {
		cout << 0 << '\n';
		cout << 1 << '\n';
	}
	else{
		cout << visited[k] - 1 << '\n';
		cout << ret << '\n';
	}
}