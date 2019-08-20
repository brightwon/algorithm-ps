#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> record) {
	map<string, string> idToName;
	vector<string> answer;

	for (int i = 0; i < record.size(); i++) {
		string w;
		vector<string> word;
		for (stringstream sts(record[i]); (sts >> w);) {
			word.push_back(w);
		}
		if(word[0] != "Leave")
			idToName[word[1]] = word[2];
	}

	for (int i = 0; i < record.size(); i++) {
		string w;
		vector<string> word;
		for (stringstream sts(record[i]); (sts >> w);) {
			word.push_back(w);
		}
		if (word[0] == "Enter")
			answer.push_back(idToName[word[1]] + "님이 들어왔습니다.");
		else if (word[0] == "Leave")
			answer.push_back(idToName[word[1]] + "님이 나갔습니다.");
	}
	return answer;
}

int main() {
	vector<string> input;
	input.push_back("Enter uid1234 Muzi");
	input.push_back("Enter uid4567 Prodo");
	input.push_back("Leave uid1234");
	input.push_back("Enter uid1234 Prodo");
	input.push_back("Change uid4567 Ryan");
	vector<string> answer = solution(input);
	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << '\n';
	}
}