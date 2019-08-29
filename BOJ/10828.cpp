#include <iostream>
#include <string>

using namespace std;

class Stack {
private:
	int data[10000];
	int curr = 0;
public:
	void push(int x) {
		curr += 1;
		data[curr] = x;
	}
	
	void pop() {
		if (curr != 0) {
			int temp = data[curr];
			curr -= 1;
			cout << temp << '\n';
		} else {
			cout << -1 << '\n';
		}
	}
	
	void size() {
		cout << curr << '\n';
	}
	
	void empty() {
		if (curr == 0) {
			cout << 1 << '\n';
		} else {
			cout << 0 << '\n';
		}
	}
	
	void top() {
		if (curr == 0) {
			cout << -1 << '\n';
		} else {
			cout << data[curr] << '\n';
		}
	}
};

int main() {
	int n;
	cin >> n;
	
	string command;
	int data;
	Stack s;
	for (int i = 0; i < n; i++) {
		cin >> command;
		if (command == "push") {
			cin >> data;
			s.push(data);
		} else if (command == "pop") {
			s.pop();
		} else if (command == "size") {
			s.size();
		} else if (command == "empty") {
			s.empty();
		} else if (command == "top") {
			s.top();
		}
	}
}
