#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
	vector<string> answer;
	vector<string> temp;
	bool isReceive = false;
	for (int i = 0; i < record.size(); i++) {
		string w;
		for (stringstream sts(record[i]); (sts >> w);) {
			if (w == "RECEIVE") isReceive = true;
		}
		if (isReceive) {
			temp.push_back(w);
			isReceive = false;
		} else if (w == "DELETE") {
			if (!temp.empty()) {
				temp.pop_back();
			}
		} else if (w == "SAVE") {
			if (!temp.empty()) {
				for (int i = 0; i < temp.size(); i++) answer.push_back(temp[i]);
				temp.clear();
			}
		}
	}
	return answer;
}
