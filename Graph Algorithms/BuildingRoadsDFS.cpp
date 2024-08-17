//IrakliDK
//https://cses.fi/problemset/task/1666

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
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef vector<vector<bool>> vvb;
typedef vector<pair<ll, ll>> vpll;
typedef vector<pair<int, int>> vpii;
bool sortbysec(const pair<int, int>& a, const pair<int, int>& b) { return(a.second < b.second); }

void dfs(vector<set<int> >& vertices, set<int>& visited, int idx) {

	for(int child : vertices[idx]) {
		if (!visited.count(child)) {
			visited.insert(child);
			dfs(vertices, visited, child);
		}
	}

}

int main()
{
	int n, m; cin >> n >> m;
	vector<set<int>> vertices(n);
	forr(i, m) {
		int a, b; cin >> a >> b;
		vertices[a - 1].insert(b - 1);
		vertices[b - 1].insert(a - 1);
	}

	vector<int> ans;
	set<int> vis;

	for (int i = 0; i < vertices.size(); i++) {
		if (!vis.count(i)) {
			ans.push_back(i);
			vis.insert(i);
			dfs(vertices, vis, i);
		}
	}

	cout << ans.size() - 1 << endl;
	for (int i = 0; i < ans.size() - 1; i++) {
		cout << ans[i] + 1 << " " << ans[i + 1] + 1 << endl;
	}

}