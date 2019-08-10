#include <stdio.h>

void SelectionSort(int a[]);

int main() {
	int a[10] = { 1, 10, 3, 5, 4, 7, 9, 8, 6, 2 };
	SelectionSort(a);
	
	for (int i = 0; i < 10; i++) printf("%d ", a[i]);
	return 0;
}

// �������� ����
void SelectionSort(int a[]) {
	int index, temp, min;
	for (int i = 0; i < 10; i++) {
		min = a[i]; // �ּҰ� ����
		for (int j = i; j < 10; j++) {
			if (a[j] <= min) {
				min = a[j]; // ��ȸ�ϸ� �ּҰ� ã��
				index = j;
			}
		}
		temp = a[i];
		a[i] = min;
		a[index] = temp;
	}
}