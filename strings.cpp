#include <iostream>
#include <vector>

using namespace std;

struct problem {
	int k;
	string s;
};

void solve(const problem& p) {
	cout << p.k << " " << p.s << endl;
}

int main() {
	int n;
	vector<problem> v;
	problem p;

	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> p.k >> p.s;
		v.push_back(p);
	}

	for(auto i : v) {
		solve(i);
	}

	return 0;
}