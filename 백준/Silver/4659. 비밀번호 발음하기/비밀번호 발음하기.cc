#include <bits/stdc++.h>
using namespace std;
string s;
int lcnt, vcnt;
char c, prev;

bool check(char c){
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	// 모음 하나 이상
	// 모음이나 자음 연속 3개는 안됨
	// 같은 글자 두번 이상 안됨(ee와 oo는 허용)
	while(true){
		cin >> s;
		if(s == "end")break;
		lcnt = vcnt = 0;
		bool flag = 0;
		bool is_include_v = 0;
		int prev = -1;

		for (int i = 0; i < s.size(); i++){
			c = s[i];
			if(check(c)) lcnt++, vcnt = 0, is_include_v = 1;
			else vcnt++, lcnt = 0;
			if(vcnt == 3 || lcnt == 3) flag = 1;
			if(i >= 1 && (prev == c) && (c != 'e' && c != 'o')){
				flag = 1;
			}
			prev = c;
		}
		if(is_include_v == 0) flag = 1;
		if (flag) cout << "<" << s << ">" << " is not acceptable.\n";
		else cout << "<" << s << ">" << " is acceptable.\n";
	}
}