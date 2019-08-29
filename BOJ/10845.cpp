#include <iostream>
#include <string>

using namespace std;

class Queue {
private:
	int data[10000];
	int head = 0;
	int tail = 0;
	int count = 0;
public:
	void push(int x) {
		data[tail] = x;
		tail += 1;
		count += 1;
	}
	void pop() {
		if (count == 0) {
			cout << -1 << '\n';
		} else {
			cout << data[head] << '\n';
			head += 1;
			count -= 1;
		}
	}
	void size() {
		cout << count << '\n';
	}
	void empty() {
		if (count == 0) {
			cout << 1 << '\n';
		} else {
			cout << 0 << '\n';
		}
	}
	void front() {
		if (count == 0) {
			cout << -1 << '\n';
		} else {
			cout << data[head] << '\n';
		}
	}
	void back() {
		if (count == 0) {
			cout << -1 << '\n';
		} else {
			cout << data[tail-1] << '\n';
		}
	}
};

int main() {
	int n;
	cin >> n;
	
	string input;
	int data;
	Queue q;
	for (int i = 0; i < n; i++) {
		cin >> input;
		if (input == "push") {
			cin >> data;
			q.push(data);
		} else if (input == "pop") {
			q.pop();
		} else if (input == "size") {
			q.size();
		} else if (input == "empty") {
			q.empty();
		} else if (input == "front") {
			q.front();
		} else if (input == "back") {
			q.back();
		}
	}
}
