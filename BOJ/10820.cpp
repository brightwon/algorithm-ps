#include <iostream>
#include <string>

using namespace std;

int main() {
	
	for (int i = 0; i < 100; i++) {
		string s;
		getline(cin, s);
		
		if (s.length() == 0) break;
		
		int lower = 0, upper = 0, number = 0, space = 0;
		for (int j = 0; j < s.size(); j++) {
			if (s[j] >= 'a' && s[j] <= 'z') {
				lower += 1;
			} else if (s[j] >= 'A' && s[j] <= 'Z') {
				upper += 1;
			} else if (s[j] >= '0' && s[j] <= '9') {
				number += 1;
			} else if (s[j] == ' ') {
				space += 1;
			}
		}
		cout << lower << " " << upper << " " << number << " " << space << '\n';
	}
}
