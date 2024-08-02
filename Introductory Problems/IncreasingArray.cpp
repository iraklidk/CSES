//IrakliDK
//https://cses.fi/problemset/task/1094

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi; typedef vector<string> vs; typedef vector<char> vc; typedef vector<pair<int, int>> vp;

int main()
{

	int n; cin >> n;
	vi vec(n);
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
		if (i > 0 && vec[i] < vec[i - 1]) {
			ans += vec[i - 1] - vec[i];
			vec[i] = vec[i - 1];
		}
	}

	cout << ans;
}