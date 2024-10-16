#include<bits/stdc++.h>
using namespace std;
string s;
int flag;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 문자열 입력
    cin >> s;
    // pi ka chu만 들어가 있어야됨.
    for(int i = 0; i < s.size();){
        //cout << "i : " << i << '\n';
        if(s[i] == 'p'){
            i++;
            if(i< s.size() && s[i] == 'i'){
                i++;
                continue;
            }
            else{
                flag = 1;
                break;
            }
        }
        else if(s[i] == 'k'){
            i++;
            if(i< s.size() && s[i] == 'a'){
                i++;
                continue;
            }
            else{
                flag = 1;
                break;
            }
        }
        else if(s[i] == 'c'){
            i++;
            if(i< s.size() && s[i] == 'h'){
                i++;
                if(i< s.size() && s[i] == 'u'){
                    i++;
                    continue;
                }
                else{
                    flag = 1;
                    break;
                }
            }
            else{
                flag = 1;
                break;
            }
        }
        else{
            flag = 1;
            break;
        }
    }

    if(flag) cout << "NO" << '\n';
    else cout << "YES" << '\n';
}