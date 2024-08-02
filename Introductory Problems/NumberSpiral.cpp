//IrakliDK
//https://cses.fi/problemset/task/1071

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi; typedef vector<string> vs; typedef vector<char> vc; typedef vector<pair<int, int>> vp;

int main()
{
	int tc; cin >> tc;
	while (tc--) {

		ll y, x; cin >> y >> x;

		if (y > x) {
			ll area = y * y;
			ll diff = 0;
			ll ans = 0;
			if (y % 2 == 0) { // decerasing
				diff = x - 1;
				ans = area - diff;
			}
			else { // increasing
				diff = y - 1 + y - x;
				ans = area - diff;
			}

			cout << ans << endl;
		}

		else {
			ll area = x * x;
			ll diff = 0;
			ll ans = 0;
			if (x % 2 == 1) { // decerasing
				diff = y - 1;
				ans = area - diff;
			}
			else { // increasing
				diff = x - 1 + x - y;
				ans = area - diff;
			}

			cout << ans << endl;
		}

	}
}