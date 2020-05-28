#include <iostream>
#include <vector>

using namespace std;

vector<int> subseq(int begin, int end, const vector<int>& v) {
	int size = end-begin;
	if(size==0) return vector<int>(1, v[begin]);
	else {
		
	}
}

void solve(vector<int>& sequence) {
	cout << sequence.size();
	for(auto i : sequence) {
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