//IrakliDK
//https://cses.fi/problemset/task/1622

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;

void generateStrings(string s, string tmp, int n, set<string>& res) {

    if (tmp.size() == n) {
        res.insert(tmp);
        return;
    }

    for (int i = 0; i < s.size(); i++) {
        string ans = tmp + s[i];
        generateStrings(s.substr(0, i) + s.substr(i + 1), ans, n, res);
    }

}

int main()
{

    string s; cin >> s;
    string tmp = "";
    set<string> res;
    int n = s.size();
    generateStrings(s, tmp, n, res);
    cout << res.size() << endl;
    for (string s : res) {
        cout << s << endl;
    }

}