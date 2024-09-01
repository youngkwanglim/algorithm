#include<bits/stdc++.h>
using namespace std;
#define prev kk
int n, t, A, B, asum, bsum;
string prev, s;
string print(int a){ 
    string d = "0" + to_string(a / 60); 
    string e = "0" + to_string(a % 60); 
    return d.substr(d.size() - 2, 2) + ":" + e.substr(e.size() - 2, 2); 
}
int change(string a){
   return stoi(a.substr(0, 2)) * 60 + stoi(a.substr(3, 2));
}
void go(int &sum, string s){
   sum += (change(s) - change(prev));
}
int main(){
   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   cin >> n;
   for(int i = 0; i < n; i++){
		cin >> t >> s;
		if(A > B) go(asum, s);
		else if(B > A) go(bsum, s);
		if(t == 1) A++;
		else B++;
		prev = s;
	}
	if(A > B)go(asum, "48:00");
    else if(B > A)go(bsum, "48:00"); 
    cout << print(asum) << "\n"; 
    cout << print(bsum) << "\n";
}