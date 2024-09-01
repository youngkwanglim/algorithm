#include <bits/stdc++.h>
using namespace std;
int n, cnt_z;
string s1, s2;
vector<string> v;

bool cmp(string s1, string s2){
	if(s1.size() == s2.size()){
		return s1 < s2;
	}
	return s1.size() < s2.size();
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s1;
		s2 = "";
		for(char c : s1){
			// 문자일 경우 아무것도 안함 
			if ('a' <= c && c <= 'z') {
				if (s2.size() >= 1){
					v.push_back(s2);
					s2 = "";
				}	
			}
			else {
				if(s2 == "0"){
					s2 = c;
				}
				else{
					s2 += c;
				}
			}
		}
		if (s2.size() >= 1){
			v.push_back(s2);
			//s2 = "";
		}	
	} 
	sort(v.begin(), v.end(), cmp);
	for(string s : v){
		cout<< s << '\n';
	}
}