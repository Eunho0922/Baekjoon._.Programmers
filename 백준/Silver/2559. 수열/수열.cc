#include <bits/stdc++.h>
using namespace std;

int N, K;
int psum[100004];
int ret = -10000001;

int main(){

	cin >> N >> K;
	
	for(int i = 1; i <= N; i++){
		int input;
		cin >> input;
		psum[i] = psum[i - 1] + input;
	}
	
	for(int i = K; i <= N; i++){
		ret = max( ret, psum[i] - psum [i - K] );
	}
	
	cout << ret;

	return 0;
}