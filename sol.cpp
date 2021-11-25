#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int a, b;
		cin >> a >> b;
		// check if the sum is odd or even
		cout << ((a + b) & 1 ? "Alice" : "Bob") << '\n';
	}
	return 0;
}
