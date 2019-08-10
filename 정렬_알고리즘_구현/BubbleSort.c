#include <stdio.h>

void BubbleSort(int a[]);

int main() {
	int a[10] = { 1, 10, 3, 5, 4, 7, 9, 8, 6, 2 };
	BubbleSort(a);

	for (int i = 0; i < 10; i++) printf("%d ", a[i]);
	return 0;
}

void BubbleSort(int a[]) {
	int temp;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < (10 - 1) - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}