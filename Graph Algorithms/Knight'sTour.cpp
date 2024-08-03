//IrakliDK
//https://cses.fi/problemset/task/1689/

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

bool inBounds(int r, int c) {
	if (r < 0 || r >= 8 || c < 0 || c >= 8) return false;

	return true;
}

bool knightTour(int row, int col, int count, vvi& ans) {
	if (count == 65) return true;

	vector<pair<int, pair<int, int>>> shortest;

	for (int i = 0; i < 8; i++) {
		pair<int, pair<int, int>> pair1;
		int tmpRow = row + diri[i];
		int tmpCol = col + dirj[i];
		if (inBounds(tmpRow, tmpCol) && ans[tmpRow][tmpCol] == 0) {
			int counter = 0;
			for (int j = 0; j < 8; j++) {
				if (inBounds(tmpRow + diri[j], tmpCol + dirj[j]) && ans[tmpRow + diri[j]][tmpCol + dirj[j] ]== 0)
					counter++;
			}
			pair1.first = counter;
			pair1.second.first = diri[i];
			pair1.second.second = dirj[i];
			shortest.push_back(pair1);
		}
	}

	sort(shortest.begin(), shortest.end());


	for (int i = 0; i < shortest.size(); i++) {
		int newRow = row + shortest[i].second.first;
		int newCol = col + shortest[i].second.second;
		ans[newRow][newCol] = count;
		if (knightTour(newRow, newCol, count + 1, ans))
			return true;

			ans[newRow][newCol] = 0;
	}
	return false;
}

void printAns(vector<vector<int>>& ans) {
	for (vector<int> vec : ans) {
		for (int i : vec) {
			cout << i << " ";
		}
		cout << endl;
	}
}

int main() 
{
	int x, y; cin >> x >> y;
	vvi ans(8, vi(8));
	ans[y - 1][x - 1] = 1;
	if (knightTour(y - 1, x - 1, 2, ans)) {
		printAns(ans);
	}
	else
		no;

}