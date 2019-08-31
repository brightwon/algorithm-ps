#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	string s;
	cin >> s;
	
	map<int, int> m;
	for (int i = 97; i <= 122; i++) {
		m[i] = -1;
	}
	
	for (int i = 0; i < s.size(); i++) {
		if (m[s[i]] == -1) {
			m[s[i]] = i;
		}
	}
	
	for (int i = 97; i <= 122; i++) {
		cout << m[i] << " ";
	}
}
