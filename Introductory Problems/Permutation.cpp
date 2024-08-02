//IrakliDK
//https://cses.fi/problemset/task/1070/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi; typedef vector<string> vs; typedef vector<char> vc; typedef vector<pair<int, int>> vp;

int main()
{

	int n; cin >> n;

	vi ans(n);
	int sidx = 1;
	int eidx = n;
	for (int i = 0; i < n; i++) {
		if (sidx > eidx) break;
		if (i % 2 == 0) {
			ans[i] = sidx;
			sidx++;
		}
		else {
			ans[i] = eidx;
			eidx--;
		}
	}

	swap(ans[0], ans[n - 1]);
	if (n == 4) {
		swap(ans[n - 1], ans[n - 2]);
		swap(ans[n - 2], ans[n - 3]);
	}

	if (n == 3 || n == 2)
		cout << "NO SOLUTION" << endl;
	else {
		for (int i : ans) {
			cout << i << " ";
		}
	}

}