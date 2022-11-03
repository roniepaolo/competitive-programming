/* https://codeforces.com/contest/106/problem/A */
#include <bits/stdc++.h>
using namespace std;

map<char, int> m;

int main() {
    m['6'] = 0;
    m['7'] = 1;
    m['8'] = 2;
    m['9'] = 3;
    m['T'] = 4;
    m['J'] = 5;
    m['Q'] = 6;
    m['K'] = 7;
    m['A'] = 8;
    
    char trump;
    cin >> trump;
    string c1, c2;
    cin >> c1 >> c2;
    
    if (c1[1] == trump && c2[1] != trump)
        cout << "YES" << '\n';
    else if (c1[1] == c2[1]) {
        if (m[c1[0]] > m[c2[0]])
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    else if (c2[1] == trump)
        cout << "NO" << '\n';
    else
        cout << "NO" << '\n';
    
    return 0;
}
