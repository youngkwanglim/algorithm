#include<bits/stdc++.h>

using namespace std;
int cnt, max_day;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> tmp;
    vector<int> ret;
    
    for(int i = 0; i < progresses.size(); i++){
        int day = 0;
        int last_job = 100 - progresses[i];
        day += last_job / speeds[i];
        if(last_job > 0 && last_job % speeds[i]) day++;
        tmp.push_back(day);

    }
    
    for(int i = 0; i < tmp.size(); i++){
        cout << tmp[i] << " ";
    }    
    
    
    for(int i : tmp){
        if(i > max_day){
            if(cnt != 0) {
                ret.push_back(cnt);
                cnt = 0;
            }
            max_day = i;
            cnt++;
        }
        else{
            cnt++;
        }
    }
    ret.push_back(cnt);
    return ret;
}  