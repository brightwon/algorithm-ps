using namespace std;

long long solution(int n) {
	long long key;
	
	if (n % 4 == 0) key = (n/4) - 1;
	else key = (n/4);
	
	if (n == (4 * key) + 1) {
		if (n == 1) return n * (n + 1);
		return (n - (3 * key)) * (n - ((3 * key) - 1)) * (n - ((3 * key) - 2));
	} else {
		return (n - key) * (n + 1 - key);
	}
}
