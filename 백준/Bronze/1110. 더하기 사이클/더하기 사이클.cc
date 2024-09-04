#include <bits/stdc++.h>

using namespace std;

int main() {
    int init;
    cin >> init;
    int N = init;
    int count = 0;

    while(true) {
	    N = (N % 10) * 10 + ((N / 10) + (N % 10)) % 10;

	    count++;
	
	    if(N == init) {
		    break;
	    }
    }

    cout << count;
    return 0;
}