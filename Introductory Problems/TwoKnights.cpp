//IrakliDK
//https://cses.fi/problemset/task/1072

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

	for (ll i = 1; i <= n; i++) {
		ll ans = 0;
		ll total = (i * i * (i * i - 1)) / 2;
		ll noValid = (i - 1) * (i - 2) * 4;
		ans = total - noValid;

		cout << ans << endl;
	}

}