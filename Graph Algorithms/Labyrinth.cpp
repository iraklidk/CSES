//IrakliDK
//https://cses.fi/problemset/task/1193/

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
typedef pair<int, int> pii;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef vector<vector<char>> vvc;
typedef vector<vector<bool>> vvb;
typedef vector<pair<ll, ll>> vpll;
typedef vector<vector<string>> vvs;
typedef vector<pair<int, int>> vpii;
bool sortbysec(const pair<int, int>& a, const pair<int, int>& b) { return(a.second < b.second); }
const vi diri = { 1, -1, 0, 0 };
const vi dirj = { 0, 0, 1, -1 };

struct point {
	int x;
	int y;
	char from;
	point* parent;
	int distance;
	point(int x = 0, int y = 0, char ch = 'a', point* par = NULL, int distance = 0) {
		this->x = x; this->y = y; this->from = ch;this->parent = par; this->distance = distance;
	}
};

bool validPoint(vs& board, vvb& visited, point* p) {
	if (board[p->x][p->y] == '#') return false;
	if (visited[p->x][p->y] == 1) return false;
	return true;
}

bool inBounds(int a, int b, vs& board) {
	return a >= 0 && a < board.size() && b >= 0 && b < board[0].size();
}

void setChar(point* p, int i, int j) {
	if (i == 1) p->from = 'D';
	if (i == -1) p->from = 'U';
	if (j == 1) p->from = 'R';
	if (j == -1) p->from = 'L';
}

void bfs(vs& board, point* A, point* B, point*& ans, vvb& visited) {
	queue<point*> pq;
	pq.push(A);
	while (!pq.empty()) {
		point* p = pq.front();
		pq.pop();
		forr(i, 4) {
			if (inBounds(p->x + diri[i], p->y + dirj[i], board)) {
				point* newPoint = new point();
				newPoint->x = p->x + diri[i];
				newPoint->y = p->y + dirj[i];

				newPoint->distance = abs(newPoint->x - B->x) + abs(newPoint->y - B->y);
				setChar(newPoint, diri[i], dirj[i]);
				newPoint->parent = p;

				if (board[newPoint->x][newPoint->y] == 'B') {
					ans = newPoint;
					return;
				}

				if (validPoint(board, visited, newPoint)) {
					visited[newPoint->x][newPoint->y] = 1;
					pq.push(newPoint);
				}

			}
		}
	}
}

int main()
{
	int n, m; cin >> n >> m;
	vs board(n);
	forr(i, n) {
		string s; cin >> s;
		board[i] = s;
	}

	point A;
	point B;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 'A') {
				A.x = i;
				A.y = j;
				A.distance = 0;
				A.parent = NULL;
				A.from = '2';
			}
			if (board[i][j] == 'B') {
				B.x = i;
				B.y = j;
				B.distance = 0;
				B.parent = NULL;
				B.from = '2';
			}
		}
	}

	vvb visited(n, vb(m));
	point* ans = NULL;

	bfs(board, &A, &B, ans, visited);

	if (!ans) cout << "NO" << endl;
	\
	else {
		vc way;
		while (ans->parent) {
			way.push_back(ans->from);
			ans = ans->parent;
		}
		cout << "YES" << endl;
		reverse(way.begin(), way.end());
		cout << way.size() << endl;
		for (char c : way) {
			cout << c;
		}
	}
}