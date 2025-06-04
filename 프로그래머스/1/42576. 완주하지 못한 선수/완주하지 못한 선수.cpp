#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    // 동명이인 처리가 핵심임.
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    for(int i = 0 ; i < completion.size(); i++){
        if(completion[i] != participant[i]){
            return participant[i];
        }
    }
    return participant[participant.size() - 1];
}