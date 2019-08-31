#include <vector>
using namespace std;

int solution(vector<int> &A) {
	bool c[A.size()] = {false,};
	
	int result = 0;
	for (int i = 0; i < A.size(); i++) {
		if (c[A[i]] == false) {
			c[A[i]] = true;
			result = i;
		}
	}
	return result;
}
