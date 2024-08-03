//IrakliDK
//https://cses.fi/problemset/task/1623/

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

int main()
{
	int n; cin >> n;
	vi vec(n);
	ll sum = 0;
	forr(i, n) {
		cin >> vec[i];
		sum += vec[i];
	}
	ll mn = INT_MAX;
	vec = findMin(vec, sum, mn, 0, sum);

	cout << (n > 1 ? mn : vec[0]) << endl;
}