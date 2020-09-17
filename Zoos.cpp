#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int z_count = 0;
	int o_count = 0;
	string word;
	cin >> word;
	int str_length = word.size();
	for (int i = 0; i < str_length; i++) {
		if (word[i] == 'z') {
			z_count += 1;
		}
		else {
			o_count += 1;
		}
	}
	if (o_count == z_count * 2) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
}
