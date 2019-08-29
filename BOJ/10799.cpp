#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
	string input;
	cin >> input;
	
	stack<char> s;
	int numPipe = 0;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == '(') {
			s.push(input[i]);
		}
		else if (input[i] == ')') {
			s.pop();
			if (input[i-1] == '(') { // cut the pipe
				numPipe += s.size();
			} else {
				numPipe += 1;
			}
		}
	}
	cout << numPipe;
}
