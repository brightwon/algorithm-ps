#include <stdio.h>

int main() {
	int n, m;
	scanf("%d", &n);
	
	int max, min;
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		if(i == 0) {
			max = m;
			min = m;
		}
		else {
			if (m > max) max = m;
			if (m < min) min = m;
		}
	}
	
	printf("%d %d", min, max);
}
