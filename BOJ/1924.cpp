#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int month_num = 0;
	
	for(int i = 1; i < n; i++) {
		month_num += days[i - 1];
	}
	
	int a = (month_num + m) % 7;
	
	switch(a) {
		case 0:
			printf("SUN");
			break;
		case 1:
			printf("MON");
			break;
		case 2:
			printf("TUE");
			break;
		case 3:
			printf("WED");
			break;
		case 4:
			printf("THU");
			break;
		case 5:
			printf("FRI");
			break;
		case 6:
			printf("SAT");
			break;
	}
}
