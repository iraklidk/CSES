//IrakliDK
//https://cses.fi/problemset/task/1090

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi; typedef vector<string> vs; typedef vector<char> vc; typedef vector<pair<int, int>> vp;

int main()
{

	int n, x; cin >> n >> x;
	vi vec(n);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}

	sort(vec.begin(), vec.end());

	ll a = 0, ans = 0, num = n - 1;

	while (num >= a) {
		if (vec[a] + vec[num] <= x) {
			ans++;
			a++;
			num--;
		}
		else {
			ans++;
			num--;
		}
	}

	cout << ans;
}