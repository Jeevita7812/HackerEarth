#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int size_array;
	int ans = 1;
	cin >> size_array;
	int mod = 1000000007;
	long int a[size_array];
	for (int i = 0; i < size_array; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < size_array; i++) {
		//( ( a % c ) * ( b % c ) ) % c
		ans = ((ans % mod) * (a[i] % mod)) % mod;
	}
	cout << ans;
	return 0;
}
