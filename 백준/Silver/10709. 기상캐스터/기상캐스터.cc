#include<bits/stdc++.h>
using namespace std;
int h, w, ret[100][100];
char a[100][100];
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> h >> w;
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			cin >> a[i][j];
			ret[i][j] = -1;
			for(int k =0; k < w; k++){
				if(j - k >= 0 && a[i][j - k] == 'c'){
					ret[i][j] = k;
					break;
				}
			}
		}
	}
	for(int i = 0; i < h; i++){
		for(int j = 0; j < w; j++){
			cout << ret[i][j] << " ";
		}
		cout << '\n';
	}
}