//IrakliDK
//https://cses.fi/problemset/task/1069

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi; typedef vector<string> vs; typedef vector<char> vc; typedef vector<pair<int, int>> vp;

int main()
{

	string a; cin >> a;

	int ans = 0;
	for (int i = 0; i < a.size() - 1; i++) {
		int loc = 0;
		int idx = i;
		while (a[idx] == a[idx + 1]) {
			loc++;
			idx++;
		}
		i = idx;
		ans = max(ans, loc);
	}

	cout << ans + 1;

}