//IrakliDK
//https://cses.fi/problemset/task/1621

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi; typedef vector<string> vs; typedef vector<char> vc; typedef vector<pair<int, int>> vp;

int main()
{

	int n; cin >> n;
	vi vec(n);
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
		mp[vec[i]]++;
	}
	cout << mp.size();

}