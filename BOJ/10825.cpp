#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct student {
	string name;
	int ko, en, ma;
};

bool compare(student s1, student s2) { //정렬 조건 
    if(s1.ko == s2.ko) {
        if(s1.en == s2.en) {
            if(s1.ma == s2.ma)
                return s1.name < s2.name;
            else
                return s1.ma > s2.ma;
        }
        else
            return s1.en < s2.en;
    }
    else
        return s1.ko > s2.ko;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	student s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i].name >> s[i].ko >> s[i].en >> s[i].ma;
	}

	sort(s, s+n, compare);

	for (int i = 0; i < n; i++) {
		cout << s[i].name << '\n';
	}
}
