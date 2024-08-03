//IrakliDK
//https://cses.fi/problemset/task/1619

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
	vi arr(n);
	vi end(n);
	forr(i, n) {
		cin >> arr[i];
		cin >> end[i];
	}
	sortVec(arr);
	sortVec(end);

	int ptrArr = 0, ptrEnd = 0, curr = 0, mx = 0;
	while (ptrArr < n && ptrEnd < n) {
		if (arr[ptrArr] < end[ptrEnd]) {
			curr++;
			mx = max(mx, curr);
			ptrArr++;
		}
		else {
			ptrEnd++;
			curr--;
		}
	}

	cout << mx << endl;

}