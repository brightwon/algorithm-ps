#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	
	int asc[26] = {0,};
	int x;
	for (int i = 0; i < s.size(); i++) {
		x = s[i];
		asc[x - 97] += 1;
	}
	
	for (int i = 0; i < 26; i++) {
		cout << asc[i] << " ";
	}
}
