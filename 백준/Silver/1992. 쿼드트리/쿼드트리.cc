#include<bits/stdc++.h>
using namespace std;
char a[68][68];
int n;
string s;

string go(int y, int x, int size){
	if(size == 1) return string(1, a[y][x]);
	char b = a[y][x];
	string ret = "";
	for (int i = y; i < y + size; i++){
		for (int j = x; j < x + size; j++){
			if(b != a[i][j]){
                ret += '(';
                ret += go(y, x, size / 2); 
                ret += go(y, x + size / 2, size / 2);
                ret += go(y + size / 2, x, size / 2);
                ret += go(y + size / 2, x + size / 2, size / 2); 
                ret += ')';
                return ret;  
			}
		}
	}
	return string(1, a[y][x]);
}
 
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	// 흰점:0 / 검은점:1 
	//비교해서 하나라도 다르면 괄호로 작성
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s; 
		for(int j = 0; j < n; j++){
			a[i][j] = s[j];
		}
	}
	cout << go(0, 0, n) << '\n';
}