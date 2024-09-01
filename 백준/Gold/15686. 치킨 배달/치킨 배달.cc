#include<bits/stdc++.h>
using namespace std;
int n, m, a[54][54], ret = 987654321;
int p, k;
vector<pair<int, int>> chicken, house, special;

void go(vector<pair<int, int>> b){
	int sum = 0;
	for(pair<int, int> h : house){
		int tmp = 987654321;
		for(pair<int, int> c : b){
			tmp = min(tmp, abs(c.first - h.first) + abs(c.second - h.second));
		}
		sum += tmp;
	}
	ret = min(sum, ret);
}

void combi(int start, vector<pair<int, int>> v){
	if(v.size() == m){
		go(v);
		return;
	}
	for(int i = start + 1; i < chicken.size(); i++){
		v.push_back(chicken[i]);
		combi(i, v);
		v.pop_back();
	}
	return;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	//빈칸 0 , 치킨집 2, 집 1
	//r과 c는 1부터
	//도시의 치킨 거리는 모든 집의 치킨 거리의 합 
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j]; 
			// 치킨집 리스트 벡터에 입력
			if(a[i][j] == 2) chicken.push_back({i,j}); 
			if(a[i][j] == 1) house.push_back({i,j}); 
		}
	}
	
	//그 후보 갯수만큼 뽑아서 그 치킨집 별로 각 최단거리의 합을 구함
	combi(-1, special);
	
	// 그중 가장 작은 것이 최종 답  
	cout << ret << '\n';
}