#include <stdio.h>

int d[11];

int main() {
	d[0] = 0;
	d[1] = 1;
	d[2] = 2;
	d[3] = 4;
	
	for (int i = 4; i <= 11; i++) {
		d[i] = d[i-3] + d[i-2] + d[i-1];
	}
	
	int n, m;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		 scanf("%d\n", &m);
		 printf("%d\n", d[m]);
	}
}
