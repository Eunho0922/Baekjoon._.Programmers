#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;

int main() {
	// 추가한 코드
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	int N;
	cin >> N;

	int number;

	for (int i = 0; i < N; ++i) {
		cin >> number;
		v.push_back(number);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; ++i) {
		cout << v[i] << '\n';
	}

	return 0;
}