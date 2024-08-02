//IrakliDK
//https://cses.fi/problemset/task/1068

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi; typedef vector<string> vs; typedef vector<char> vc; typedef vector<pair<int, int>> vp;

int main()
{

	ll n; cin >> n;
	cout << n << " ";
	while (n > 1) {

		if (n % 2 == 0) {
			n /= 2;
			cout << n << " ";
		}

		else {
			n = n * 3 + 1;
			cout << n << " ";
		}

	}

}