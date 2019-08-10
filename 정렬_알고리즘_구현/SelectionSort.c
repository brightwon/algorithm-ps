#include <stdio.h>

void SelectionSort(int a[]);

int main() {
	int a[10] = { 1, 10, 3, 5, 4, 7, 9, 8, 6, 2 };
	SelectionSort(a);
	
	for (int i = 0; i < 10; i++) printf("%d ", a[i]);
	return 0;
}

// 오름차순 정렬
void SelectionSort(int a[]) {
	int index, temp, min;
	for (int i = 0; i < 10; i++) {
		min = a[i]; // 최소값 설정
		for (int j = i; j < 10; j++) {
			if (a[j] <= min) {
				min = a[j]; // 순회하며 최소값 찾기
				index = j;
			}
		}
		temp = a[i];
		a[i] = min;
		a[index] = temp;
	}
}