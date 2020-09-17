#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int l, r, k;
	cin >> l >> r >> k;
	if (l % k == 0) {
		cout << ((r / k) - (l / k)) + 1;
	}
	else {
		cout << (r / k) - (l / k);
	}
}
