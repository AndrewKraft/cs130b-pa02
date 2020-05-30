#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void solve(vector<int>& sequence) {
	map<int,int> values;
	vector<int> finalSeq;
	for(int i=0; i < sequence.size(); i++) {
		values.insert(pair<int, int>(sequence[i], i));
	}
	for(auto i : values) {
		vector<int> temp;
		temp.push_back(i.first);
		if(sequence.size()-i.second < finalSeq.size()) break;
		for(int j = i.second+1; j < sequence.size(); j++) {
			if(temp[temp.size()-1]<sequence[j]) temp.push_back(sequence[j]);
		}
		if(temp.size()>finalSeq.size()) finalSeq=temp;
	}
	cout << finalSeq.size();
	for(auto i : finalSeq) {
		cout << " " << i;
	}
	cout << endl;
}

int main() {
	int n, temp;
	vector<vector<int>> v;

	while(cin>>n) {
		if(n==0) break;
		vector<int> tempVector;
		for(int i = 0; i < n; i++) {
			cin >> temp;
			tempVector.push_back(temp);
		}
		v.push_back(tempVector);
	}

	for(auto i : v) {
		solve(i);
	}

	return 0;
}