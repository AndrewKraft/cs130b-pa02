#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> subseq(vector<int>& seq) {
	map<int, vector<int>, decltype(greater<int>())> lists;
	
	auto make_pair = [&](vector<int> v) {
		pair<int, vector<int>> p(v.size(), v);
		return p;
	};

	for(auto i : seq) {
		vector<int> temp;
		auto it = lists.begin();
		while(it != lists.end() && it->second.back() >= i) it++;
		if(it==lists.end()) {
			temp.push_back(i);
		} else {
			temp = it->second;
			temp.push_back(i);
		}
		auto it2 = lists.lower_bound(temp.size());
		if(it2->first==(int)temp.size()) lists.erase(it2);
		lists.insert(make_pair(temp));
	}
	return lists.begin()->second;
}

void solve(vector<int>& seq) {
	vector<int> result = subseq(seq);
	cout << result.size();
	for(auto i : result) {
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