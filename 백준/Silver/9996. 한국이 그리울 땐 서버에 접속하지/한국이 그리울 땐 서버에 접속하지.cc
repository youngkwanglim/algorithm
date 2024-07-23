#include<bits/stdc++.h>
using namespace std;
int n, k;
string s, input, s1, s2;
int main(){
    cin >> n;
    cin >> s;
    k = s.find("*");
    s1 = s.substr(0, k), s2 = s.substr(k + 1, s.length() - k - 1);

    for (int i = 0; i < n; i++) {
        cin >> input;
        if (input.length() >= s1.length() + s2.length() && // Ensure input is long enough
            input.substr(0, k) == s1 && 
            input.substr(input.length() - s2.length(), s2.length()) == s2) {
            cout << "DA" << '\n';
        }
        else {
            cout << "NE" << '\n';
        }
    }

    return 0;
}