//IrakliDK
//https://cses.fi/problemset/task/1755/

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
typedef vector<pair<int, int>> vpii;
typedef vector<vector<ll>> vll;
typedef vector<vector<int>> vvi;

int main()
{

	string s; cin >> s;
	int n = s.size();
	map<char, int> mp;
	for (int i = 0; i < n; i++) {
		mp[s[i]]++;
	}
	int countOdd = 0;
	int sidx = 0;
	int eidx = n - 1;
	for (auto p : mp) {

		if (p.second % 2 == 1) countOdd++;

		if (n % 2 == 0 && countOdd > 0) {
			s = "NO SOLUTION";
			break;
		}

		else if (n % 2 == 1 && countOdd > 1) {
			s = "NO SOLUTION";
			break;
		}

		if (p.second % 2 == 0) {
			int k = p.second;
			while (k > 0) {
				s[sidx] = p.first;
				s[eidx] = p.first;
				eidx--;
				sidx++;
				k -= 2;
			}
		}

		if (p.second % 2 == 1) {
			int k = p.second - 1;
			while (k > 0) {
				s[sidx] = p.first;
				s[eidx] = p.first;
				eidx--;
				sidx++;
				k -= 2;
			}
			s[n / 2] = p.first;
		}

	}

	cout << s << endl;
}