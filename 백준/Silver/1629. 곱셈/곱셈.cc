#include <iostream>

using namespace std;

long long  A, B, C;

long long p(long long b) {
	if (b == 0) return 1;
	if (b == 1) return A%C;

	long long k = p(b / 2)%C;
	if (b % 2 == 0) return k * k%C;
	else return (k* k%C)*(A % C);
}

int main() {

	cin >> A >> B >> C;
	
	cout << p(B)%C;
}