#include<bits/stdc++.h>
using namespace std;
string s, score;
int b = 20;
double sum, cnt, a;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    while(b--){
        cin >> s >> cnt >> score;
        if(score == "P"){
            continue;
        }
        a += cnt;
        if(score == "A+") sum += cnt * 4.5 ;
        else if(score == "A0") sum += cnt * 4.0 ;
        else if(score == "B+") sum += cnt * 3.5 ;
        else if(score == "B0") sum += cnt * 3.0 ;
        else if(score == "C+") sum += cnt * 2.5 ;
        else if(score == "C0") sum += cnt * 2.0 ;
        else if(score == "D+") sum += cnt * 1.5 ;
        else if(score == "D0") sum += cnt * 1.0 ;
        else if(score == "F") sum += cnt * 0.0 ;
    }

    if(a) cout << sum / a << '\n';
    else cout << "0.000000" << '\n';
}