#include <bits/stdc++.h>

using namespace std;
vector<int> ret;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    for(int i = 0; i < commands.size(); i++){
        vector<int> v = {};
        for(int j = commands[i][0] - 1; j < commands[i][1]; j++){
            v.push_back(array[j]);
        }
        sort(v.begin(), v.end());
        // for(int k = 0; k < v.size(); k++){
        //     cout << v[k] << ' ';
        // }
        // cout << '\n';
        ret.push_back(v[commands[i][2] - 1]);
    }
    return ret;
}