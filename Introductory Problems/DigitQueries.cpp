//IrakliDK
//https://cses.fi/problemset/task/2431

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
typedef vector<pair<int, int>> vpii;
typedef vector<vector<ll>> vvll;
typedef vector<vector<int>> vvi;

ll findLengthN(ll n) {
	ll sum = 0;
	ll ans = 0;
	for (int i = 1; i <= 18; i++) {
		ll tmp = (9ll * pow(10, i - 1));
		sum += tmp * i;
		if (n <= sum) {
			ans = i;
			break;
		}
	}

	return ans;
}

ll findIdx(ll mid, ll len) {
	ll ans = 0;
	for (int i = 1; i < len; i++) {
		ll num = (9ll * pow(10, i - 1));
		ans += (num * i);
	}
	ll mi = pow(10ll, len - 1);
	ans += ((mid - mi) * len) + 1;

	return ans;
}

string getStr(int len, ll n, ll& startPosAns) {
	ll low = pow(10ll, len - 1), high = pow(10ll, len) - 1, mid = 0, ans = 0;
	while (low <= high) {
		mid = (low + high) / 2;
		ll startPos = findIdx(mid, len);
		if (startPos > n) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
			ans = max(ans, mid);
			startPosAns = startPos;
		}
	}
	string strAns = to_string(ans);

	return strAns;
}

void findAns(ll n) {
	ll len = findLengthN(n), idx = 0, startPosAns = 0;
	string ans = getStr(len, n, startPosAns);
	cout << ans[n - startPosAns] << endl;
}

int main() {

	int q; cin >> q;
	vll queries(q);
	forr(i, q) {
		cin >> queries[i];
		findAns(queries[i]);
	}

}