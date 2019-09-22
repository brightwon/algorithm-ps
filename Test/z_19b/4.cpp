#include <vector>

using namespace std;

int solution(vector<int> &A) {
	int answer = 1;
	
	int N = A.size();
	int c[N-1] = {0,};
	
	for (int i = 1; i < N; i++) {
		if (A[i-1] < A[i]) {
			c[i-1] = 1;
		} else if (A[i-1] > A[i]) {
			c[i-1] = 0;
		} else if (A[i-1] == A[i]) {
			c[i-1] = 2;
		}
	}
	
	int save = 1;
	for (int i = 0; i < N-1; i++) {
		if (c[i] != c[i+1] && c[i] != 2) {
			answer += 1;
		} else if (c[i] == c[i+1] || c[i] == 2) {
			save = answer;
			answer = 1;
		}
	}
	if (save > answer) return save;
	else return answer;
}
