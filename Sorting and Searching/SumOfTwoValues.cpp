//IrakliDK
//https://cses.fi/problemset/task/1640

#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
#define no cout << "NO" << "\n"
#define yes cout << "YES" << "\n"
#define forr(i, n) for(int i=0;i<n;i++)
#define sortVec(vec) sort(vec.begin(), vec.end())
#define rsortVec(vec) sort(vec.rbegin(), vec.rend())
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef vector<vector<bool>> vvb;
typedef vector<pair<int, int>> vpii;

int main()
{
	int n, x; cin >> n >> x;
	vi vec(n);
	map<int, pair<int, int>> mp;
	forr(i, n) {
		cin >> vec[i];
		mp[vec[i]].second++;
		mp[vec[i]].first = i;
	}
	int idx1 = 0, idx2 = 0;
	for (int i = 0; i < n; i++) {
		int s = x - vec[i];
		if (mp[s].second > 0) {
			idx1 = i + 1;
			idx2 = mp[s].first + 1;
			if (idx1 != idx2) break;
			idx1 = 0;
			idx2 = 0;
		}
	}
	if (idx1 == 0 && idx2 == 0) cout << "IMPOSSIBLE" << endl;
	else
		cout << idx1 << " " << idx2 << endl;

}