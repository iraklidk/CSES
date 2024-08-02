//IrakliDK
//https://cses.fi/problemset/task/1083/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi; typedef vector<string> vs; typedef vector<char> vc; typedef vector<pair<int, int>> vp;

int main()
{

	int n; cin >> n;
	vi vec(n - 1);
	map<int, int> mp;
	int missed;
	for (int i = 0; i < n - 1; i++) {
		cin >> vec[i];
		mp[vec[i]]++;
	}

	for (int i = 0; i < n; i++) {
		mp[i + 1]++;
		if (mp[i + 1] == 1) {
			missed = i + 1;
			break;
		}
	}

	cout << missed << endl;

}