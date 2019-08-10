#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int a;
	scanf("%d", &a);

	string b = to_string(a);
	int len = b.length();

	for (int i = 0; i < len; i++) {
		printf("[%d]\n", ((int)b[i] - 48) * ((int)pow(10, b.length() - 1 - i)));
	}
}