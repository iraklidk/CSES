//IrakliDK
//https://cses.fi/problemset/task/1141

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
	int n; cin >> n;
	vll vec(n);
	map<ll, ll> mp;
	ll s = 0, mx = 0;
	forr(i, n) {
		cin >> vec[i];
	}
	for (ll i = 0; i < n; i++) {

		if (mp.find(vec[i]) == mp.end())
			mp[vec[i]] = i;
		else {
			if (mp[vec[i]] >= s)
				s = mp[vec[i]] + 1;

			mp[vec[i]] = i;
		}
		mx = max(mx, i - s + 1);
	}
	cout << mx << endl;
}