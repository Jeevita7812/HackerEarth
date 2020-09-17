#include <bits/stdc++.h>
using namespace std;
const int CHARS = 26;
int remAnagram(string str1, string str2) 
{ 
    int count1[CHARS] = {0}, count2[CHARS] = {0}; 
    for (int i=0; str1[i]!='\0'; i++) 
        count1[str1[i]-'a']++; 
    for (int i=0; str2[i]!='\0'; i++) 
        count2[str2[i]-'a']++;  
    int result = 0; 
    for (int i=0; i<26; i++) 
        result += abs(count1[i] - count2[i]); 
    return result; 
} 
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int test_cases;
	string str1;
	string str2;
	cin >> test_cases;
	for (int k = 0; k < test_cases; k++) {
		cin >> str1;
		cin >> str2;
		cout << remAnagram(str1,str2) << "\n";
	}
	return 0;
}
