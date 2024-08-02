//IrakliDK
//https://cses.fi/problemset/task/1624

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isValid(vector<string>& vec, int r, int c) {
    if (vec[r][c] == '*') return false;
    for (int i = 0; i < r; i++) { // vertical
        if (vec[i][c] == 'Q') return false;
    }
    for (int i = r, j = c; i >= 0 && j < 8; i--, j++) { // diagonal
        if (vec[i][j] == 'Q') return false;
    }
    for (int i = r, j = c; i >= 0 && j >= 0; i--, j--) { // diagonal
        if (vec[i][j] == 'Q') return false;
    }

    return true;
}

void fillRes(int n, vector<string>& sol, int& ans, int r) {
    if (r >= n) {
        ans++;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (isValid(sol, r, i)) {
            sol[r][i] = 'Q';
            fillRes(n, sol, ans, r + 1);
            sol[r][i] = '.';
        }
    }
}

int main()
{
    vector<string> vec(8);
    for (int i = 0; i < 8; i++) {
        string s; cin >> s;
        vec[i] = s;
    }
    int ans = 0;
    fillRes(8, vec, ans, 0);

    cout << ans << endl;
}


