#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

struct testcase {
	int p;
	vector<int> coins;
};

void solve(const testcase& t) {
	map<int, int> amounts;
	
}

int main() {
	int temp, t, n;
	vector<testcase> testcases;
	testcase tempcase;

	cin >> t;
	for(int i=0; i < t; i++) {
		cin >> tempcase.p >> n;
		for(int j=0; j < n; j++) {
			cin >> temp;
			tempcase.coins.push_back(temp);
		}
		sort(tempcase.coins.begin(), tempcase.coins.end(), greater<int>());
		testcases.push_back(tempcase);
	}

	for(auto i : testcases) {
		solve(i);
	}

	return 0;
}
