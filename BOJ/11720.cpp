#include <iostream>
using namespace std;

int main() {
	int n;
    scanf("%d ", &n);
    
    int result = 0;
    
    for (int i = 0; i < n; i++) {
    	char c;
    	scanf("%c", &c);
    	result += c - '0';
	}
	printf("%d", result);
}
