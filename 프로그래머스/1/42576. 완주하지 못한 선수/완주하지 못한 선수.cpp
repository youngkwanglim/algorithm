#include <bits/stdc++.h>

using namespace std;
map<string, int> m;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    for(string p : participant){
        m[p]++;
    }
    
    for(string c : completion){
        if(m[c] == 1){
            m.erase(c);
        }
        else m[c]--;
    }
    
    for(auto it : m){
        answer = it.first;
    }
    
    return answer;
}