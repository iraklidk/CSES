//IrakliDK
//https://cses.fi/problemset/task/1192

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int diri[8] = { -1, 0, 0, 1, -1, -1, 1, 1 }; 
const int dirj[8] = { 0, 1, -1, 0, -1, 1, -1, 1 };

void markRoom(int row, int col, vector<vector<char> >& vec, int n, int m) {
	if (vec[row][col] == '#') return;
	vec[row][col] = '#';

	int newRow = 0, newCol = 0;

	for (int i = 0; i < 4; i++) {

		newRow = row + diri[i];
		newCol = col + dirj[i];

		if( (newRow >= 0 && newRow < n) && (newCol >= 0 && newCol < m) )
			markRoom(newRow, newCol, vec, n, m);

	}
}


int main()
{
	
	int n, m; cin >> n >> m;
	vector<vector<char> > vec(n, vector<char>(m));
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			vec[i][j] = s[j];
		}
	}

	ll ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (vec[i][j] == '.') {
				ans++;
				markRoom(i, j, vec, n, m);
			}
		}
	}

	cout << ans << endl;

	return 0;
}


