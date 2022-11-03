/* https://codeforces.com/contest/281/problem/A */
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s[0] >= 'A' && s[0] <= 'Z')
        cout << s << '\n';
    else {
        s[0] = s[0] - 'a' + 'A';
        cout << s << '\n';
    }
    
    return 0;
}
