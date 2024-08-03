//IrakliDK
//https://cses.fi/problemset/task/1617

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
const int diri[8] = { -2, -1, 1, 2, 2, 1, -2, -1 };
const int dirj[8] = { -1, -2, -2, -1, 1, 2, 1, 2 };

vector<int> findMin(vector<int>& vec, ll sum, ll& ans, int idx, ll totalSum) {
	if (idx >= vec.size()) {
		return vec;
	}

	vector<int> resWith = findMin(vec, sum - vec[idx], ans, idx + 1, totalSum);

	vector<int> resWithout = findMin(vec, sum, ans, idx + 1, totalSum);

		ans = min(abs((totalSum - sum) - sum), ans);

	return vec;
}
ll modulo = 1e9 + 7;
ll pwr(ll a, ll b) {
	ll ans = 1;
	while (b > 0) {
		if (b % 2 == 1) {
			ans = (ans * a) % modulo;
		}
		a = (a * a) % modulo;
		b /= 2;
	}
	return ans;
}

int main()
{
	int n; cin >> n;
	cout << pwr(2ll, n) << endl;
}