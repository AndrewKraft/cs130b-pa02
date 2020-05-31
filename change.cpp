#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct testcase {
	int p;
	vector<int> coins;
};

struct collection {
	int amt, num;
	collection operator+ (const collection& other) {
		collection c;
		c.amt = this->amt + other.amt;
		c.num = this->num + other.num;
		return c;
	}
	collection operator() (const collection& a, const collection& b) const {
		return a.amt < b.amt;
	}	
};

void solve(const testcase& t) {
	vector<collection> amounts;

	while(curr.first < t.p) {

	}
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
		sort(tempcase.coins.begin(), tempcase.coins.end(), less<int>());
		testcases.push_back(tempcase);
	}

	for(auto i : testcases) {
		solve(i);
	}

	return 0;
}
