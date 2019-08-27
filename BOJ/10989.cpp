#include <iostream>
#include <algorithm>

int arr[10001];

int main() {
	int n;
	scanf("%d", &n);
	
	int input;
	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		arr[input]++;
	}
	
	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < arr[i]; j++) {
			printf("%d\n", i);
		}
	}
}
