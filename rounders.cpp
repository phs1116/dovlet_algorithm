#include <iostream>
#include <cmath>
using namespace std;
int get_count(int n) {
	int a = 0;
	while (n > 0) {
		n /= 10;
		a++;
	}
	return a;
}
int main() {
	int n, k, t;
	cin >> n;
	k = get_count(n) - 1;
	for (int i = 1; i <= k; i++) {
		t = pow(10, i);
		if ((n - (n / t)*t) / (t / 10) < 5)
			n = (n / t)*t;
		else
			n = (n / t + 1)*t;
	}
	cout << n;
}
