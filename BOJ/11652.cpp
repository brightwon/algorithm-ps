#include <iostream>
#include <algorithm>

using namespace std;

long long arr[1000000];

int main() {
	int n;
	cin >> n;

	int input;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	int count = 1, maxCount = 1;
	long long card = arr[0];

	for (int i = 1; i < n; i++) {
		if (arr[i - 1] == arr[i]) {
			count += 1;
		}
		else {
			count = 1;
		}

		if (maxCount < count) {
			maxCount = count;
			card = arr[i];
		}
	}

	cout << card;
}