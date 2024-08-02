//IrakliDK
//https://cses.fi/problemset/task/2165

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void towerOfHanoi(vector<pair<int,int> >& ans, int n, int from, int tmp, int to) {

    if (n == 0) return;
    towerOfHanoi(ans, n - 1, from, to, tmp);
    pair<int, int> pair1;
    pair1.first = from;
    pair1.second = to;
    ans.push_back(pair1);
    towerOfHanoi(ans, n - 1, tmp, from, to);
  
}

int main()
{
        int n; cin >> n;
        vector<pair<int, int> > ans;
        towerOfHanoi(ans, n, 1, 2, 3);
        cout << ans.size() << endl;
        for (pair<int, int> pair1 : ans) {
            cout << pair1.first << " " << pair1.second << endl;
        }

}