#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool compare(pair<int, float> a, pair<int, float> b) {
	if (a.second > b.second) {
		return true;
	}
	else if (a.second == b.second) {
		return a.first < b.first;
	}
	else
		return false;
}

vector<int> solution(int N, vector<int> stages) {
	map<int, int> numStageUser; // key : stage number, value : number of user who reached the stage
	map<int, int> numFailUser; // key : stage number, value : number of user who failed the stage
	for (int i = 1; i <= N; i++) { // map 초기화
		numStageUser[i] = 0;
		numFailUser[i] = 0;
	}

	int numUser = stages.size();
	for (int i = 0; i < numUser; i++) { // stages 순회
		int stage = stages[i];
		if (stage == N + 1) { // 올스테이지 클리어인 경우
			for (int i = 1; i <= N; i++) {
				numStageUser[i] += 1;
			}
		}
		else {
			for (int i = 1; i <= stage; i++) {
				numStageUser[i] += 1;
				if (i == stage) numFailUser[i] += 1;
			}
		}
	}

	vector<pair<int, float>> v;
	for (int i = 1; i <= N; i++) { // 실패율 계산하기
		if (numStageUser[i] == 0) {
			v.push_back(pair<int, float>(i, 0.0f));
		}
		else {
			v.push_back(pair<int, float>(i, (float)numFailUser[i] / (float)numStageUser[i]));
		}
	}

	sort(v.begin(), v.end(), compare); // 정렬

	vector<int> answer;
	for (int i = 0; i < v.size(); i++) {
		answer.push_back(v[i].first);
	}

	return answer;
}

int main() {
	vector<int> t1;
	t1.push_back(2);	t1.push_back(1);	t1.push_back(2);
	t1.push_back(6);	t1.push_back(2);	t1.push_back(4);
	t1.push_back(3);	t1.push_back(3);

	vector<int> t2;
	t2.push_back(4);	t2.push_back(4);	t2.push_back(4);
	t2.push_back(4);	t2.push_back(4);

	int n1 = 5, n2 = 4;
	vector<int> r1 = solution(n1, t1);
	vector<int> r2 = solution(n2, t2);
	
	for (int i = 0; i < r1.size(); i++) {
		cout << r1[i] << '\n';
	}
	cout << '\n';
	for (int i = 0; i < r2.size(); i++) {
		cout << r2[i] << '\n';
	}
}