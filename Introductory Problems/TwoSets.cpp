//IrakliDK
//https://cses.fi/problemset/task/1092/

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
	int n; cin >> n;

	if ((n % 2 == 0 && (n / 2) % 2 == 1) || (n % 2 == 1 && ((n+1) / 2) % 2 == 1) || n == 1) no;

	else {
		yes;

		ll k, sum;
		if (n % 2 == 0) {
			k = n / 4;
			sum = k * (n + 1);
		}
		else {
			k = (n + 1) / 4;
			sum = k * n;
		}

		set<ll> setA, setB;
		ll locSum = 0;
		bool endA = 0;
		for (int i = 1; i <= n; i++) {
			if (!endA) {
				locSum += i;
				setA.insert(i);
			}
			else {
				setB.insert(i);
			}
			if (locSum >= sum) {
				ll diff = locSum - sum;
				if (diff != 0) {
					setA.erase(diff);
					setB.insert(diff);
				}
				endA = 1;
			}
		}

		cout << setA.size() << endl;
		for (ll i : setA) {
			cout << i << " ";
		}
		cout << endl;
		cout << setB.size() << endl;
		for (ll i : setB) {
			cout << i << " ";
		}
		cout << endl;

	}
}