#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);

	vector<int> vec;
	for (int i = 0; i < n; i++) {
		int input;
		scanf("%d", &input);
		vec.push_back(input);
	}
	sort(vec.begin(), vec.end());

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << '\n';
	}
}