#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n, m, x;
		cin >> n >> m >> x;
		x--;
		// watch the video in this repository for better understanding
		long long col = x / n;
		long long row = x % n;
		cout << row * m + col + 1 << '\n';
	}
	return 0;
}
