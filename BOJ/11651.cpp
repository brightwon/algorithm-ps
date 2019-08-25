#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second < b.second;
	}
}

int main() {
	int n;
	scanf("%d", &n);

	int x, y;
	vector<pair<int, int>> vec;
	for (int i = 0; i < n; i++) { // �迭 �Է�
		scanf("%d %d", &x, &y);
		vec.push_back(pair<int, int>(x, y));
	}

	sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < n; i++) {
		printf("%d %d\n", vec[i].first, vec[i].second);
	}
}