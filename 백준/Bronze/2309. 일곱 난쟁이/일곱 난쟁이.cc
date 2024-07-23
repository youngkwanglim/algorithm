#include<bits/stdc++.h>
using namespace std;
int sum, child[9], first, second;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    for (int i = 0; i < 9; i++){
        cin >> child[i];
        sum += child[i];
    }
    sort(child, child + 9);

    for (int i = 0; i < 9; i++){
        for (int j = i + 1; j < 9; j++){
            if (sum - child[i] - child[j] == 100){
                first = i; second = j;
            }
        }
    }

    for (int i = 0; i < 9; i++){
        if(i != first && i != second) cout << child[i] << '\n';
    }

    return 0;
}