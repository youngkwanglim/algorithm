#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
    string sa = to_string(a);
    string sb = to_string(b);
    return sa + sb > sb + sa;
}

string solution(vector<int> numbers) {
    string answer = "";
    if (numbers.size() == 1) return to_string(numbers[0]);
    sort(numbers.begin(), numbers.end(), cmp);
    if(numbers[0] == 0) return "0";
    
    for(int i = 0; i < numbers.size(); i++){
        answer += to_string(numbers[i]);
    }
    return answer;
}