//IrakliDK
//https://cses.fi/problemset/task/1074/

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
	forr(i, n) {
		cin >> vec[i];
	}
	sortVec(vec);
	ll med = vec[n / 2];
	ll ans = 0;
	forr(i, n) {
		ans += abs(med - vec[i]);
	}
	cout << ans << endl;
}