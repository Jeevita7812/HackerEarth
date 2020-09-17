#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int num;
	int factorial = 1;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		factorial = factorial * i;
	}
	cout << factorial;
	return 0;
}
