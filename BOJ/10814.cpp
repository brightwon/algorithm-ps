#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
	if (a.first == b.first) {
		return false;
	}
	else {
		return a.first < b.first;
	}
}

int main() {
	int n;
	scanf("%d", &n);

	int age;
	string name;
	vector<pair<int, string>> vec;
	for (int i = 1; i <= n; i++) { // 배열 입력
		cin >> age >> name;
		vec.push_back(pair<int, string>(age, name));
	}

	stable_sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << vec[i].first << " " << vec[i].second << '\n';
	}
}