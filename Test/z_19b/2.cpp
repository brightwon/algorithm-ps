#include <vector>
#include <algorithm>

using namespace std;

bool cmp(float a, float b) {
	return a > b;
}

int solution(vector<int> &X, vector<int> &Y) {
	vector<float> temp;
	int N = X.size();
	
	for (int i = 0; i < N; i++) {
		temp.push_back((float)X[i] / (float)Y[i]);
	}
	
	sort(temp.begin(), temp.end(), cmp);
	
	int answer = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (temp[i] + temp[j] == 1)
				answer += 1;
			else if (temp[i] + temp[j] < 1)
				break;
		}
	}
	return answer;
}
