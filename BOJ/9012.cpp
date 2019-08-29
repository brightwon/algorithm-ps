#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	string input;
	int tradeOff, flag;
	for (int i = 0; i < n; i++) {
		tradeOff = 0;
		flag = 0;
		cin >> input;
		for (int j = 0; j < input.size(); j++) {
			if (input[j] == '(') {
				tradeOff += 1;
			}
			else if (input[j] == ')') {
				tradeOff -= 1;
				if (tradeOff < 0) {
					cout << "NO" << '\n';
					flag = 1;
					break;
				}
			}
		}
		if (flag == 1) {
			continue;
		}
		if (tradeOff > 0) {
			cout << "NO" << '\n';
			continue;
		}
		cout << "YES" << '\n';
	}
}
