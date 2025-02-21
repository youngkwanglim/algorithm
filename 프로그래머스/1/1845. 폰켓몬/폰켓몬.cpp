#include <bits/stdc++.h>
using namespace std;

set<int> s;

int solution(vector<int> nums)
{
    int answer = nums.size() / 2;
    
    for(int i : nums){
        s.insert(i);
    }
    
    if(s.size() < answer) answer = s.size();
    
    
    return answer;
}