//IrakliDK
//https://cses.fi/problemset/task/2205

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

vector<string> rec(int n) {
	if (n == 1) {
		vector<string> vec = { "0", "1" };
		return vec;
	}
	vector<string> ans = rec(n - 1);
	vector<string> ansRev = ans;
	reverse(ansRev.begin(), ansRev.end());

	int size = ans.size();
	int idx = 0;
	while (idx < size) {
		string str = "0" + ans[idx];

		ans[idx] = "1" + ansRev[idx];
		ans.push_back(str);
		idx++;
	}
	return ans;
}

int main()
{
	int n; cin >> n;
	vector<string> ans = rec(n);
	for (string s : ans) {
		cout << s << endl;
	}
}