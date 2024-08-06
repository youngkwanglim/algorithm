#include <bits/stdc++.h>
using namespace std;
string s;
int cnt, cnt_mo;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	// 모음 하나 이상
	// 모음이나 자음 연속 3개는 안됨
	// 같은 글자 두번 이상 안됨(ee와 oo는 허용)
	cin >> s;
	while(s != "end"){
		cnt = 0;
		cnt_mo = 0;
		for (int i = 0; i < s.size(); i++){
			//cout << s[i]<< " "; 
			if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
				cnt_mo++;
				//cout << "모음 있음 ";
			}
		}
		//cout << cnt_mo << " ";
		if (cnt_mo < 1) {
			cnt++;
		}
		if(s.size() >= 3){
			for (int i = 0; i < s.size() - 2; i++){
				if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
					if (s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'i' || s[i + 1] == 'o' || s[i + 1] == 'u'){
						if (s[i + 2] == 'a' || s[i + 2] == 'e' || s[i + 2] == 'i' || s[i + 2] == 'o' || s[i + 2] == 'u'){
							cnt++;
						}
					}
				}
				else{
					if (s[i + 1] != 'a' && s[i + 1] != 'e' && s[i + 1] != 'i' && s[i + 1] != 'o' && s[i + 1] != 'u'){
						if (s[i + 2] != 'a' && s[i + 2] != 'e' && s[i + 2] != 'i' && s[i + 2] != 'o' && s[i + 2] != 'u'){
							cnt++;
						}
					}
				}
			}
		}
		if(s.size() >= 2){
			for (int i = 0; i < s.size() - 1; i++){
				if (s[i] == s[i + 1] && s[i] != 'e' && s[i] != 'o'){
					cnt++;
					break;
				}
			}
		}
//		cout << "cnt 갯수 : " << cnt << " ";
		if (cnt == 0) cout << "<" << s << ">" << " is acceptable.\n";
		else cout << "<" << s << ">" << " is not acceptable.\n";
		cin >> s;
	}
}