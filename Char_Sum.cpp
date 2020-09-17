#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string word;
	cin >> word;
	int score = 0;
	for (int j = 0; j < (word.length()); j++) { 
		score += word[j] - 'a' + 1; 
	}
	cout << score;
}
