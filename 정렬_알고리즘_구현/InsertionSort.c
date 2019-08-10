#include <stdio.h>

void InsertionSort(int a[]);

int main() {
	int a[10] = { 1, 10, 3, 5, 4, 7, 9, 8, 6, 2 };
	InsertionSort(a);

	for (int i = 0; i < 10; i++) printf("%d ", a[i]);
	return 0;
}

void InsertionSort(int a[]) {
	int temp, j;
	for (int i = 0; i < 10 - 1; i++) {
		j = i;
		while (a[j] > a[j + 1]) {
			temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;
			j--;
		}
	}
}