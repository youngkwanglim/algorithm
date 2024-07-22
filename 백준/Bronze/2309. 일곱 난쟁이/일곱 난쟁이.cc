#include<bits/stdc++.h>
using namespace std;

int a[9], sum;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    
    for (int i = 0; i < 9; i++){
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a + 9);

    int index1 = -1, index2 = -1;
    for (int i = 0; i < 9; i++){
        for (int j = i + 1; j < 9; j++){
            if (sum - a[i] - a[j] == 100){
                index1 = i;
                index2 = j;
                break;
            }
        }
        if (index1 != -1) break;
    }

    for (int i = 0; i < 9; i++){
        if (i == index1 || i == index2) continue;
        cout << a[i] << '\n';
    }

    return 0;
}
