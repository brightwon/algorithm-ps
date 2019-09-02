#include <vector>
#include <math.h>

using namespace std;

int solution(int inner, int outer, vector<int> &points_x, vector<int> &points_y) {
   
    vector<pair<int,int>> temp;
    int N = points_x.size();
    
    for(int i = 0; i < N; i++) {
    	temp.push_back(pair<int,int>(points_x[i], points_y[i]));
	}
	
	int answer = 0;
	int p, br = pow(outer, 2), sr = pow(inner, 2);
	
	for (int i = 0; i < N; i++) {
		p = pow(temp[i].first, 2) + pow(temp[i].second, 2);
		if(p < br && p > sr) {
			answer += 1;
		}
	}
	return answer;
}
