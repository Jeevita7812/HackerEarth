#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string word;
	int num = 0;
	int size;
	int check;
	cin >> word;
	size = word.size();
	check = size - 1;
	for (int i = 0; i <= size; i++) {
		if (word[i] == word[check]){
			num = num + 1;
		}
		else {
			 num = -1;
		}
		check = check - 1;
	if (num < 0 && num < 1 ) {
		if (size % 2 == 0) {
			if (num = size / 2) {
				cout << "NO";
				break;
			break;
			}
		}
		else if (size % 2 != 0) {
			if (num = (size + 1) / 2) {
				cout << "NO";
				break;
			break;
			}
		}
		break;
		}
	else {
		cout << "YES";
		break;
	}
	}
	return 0;
}
