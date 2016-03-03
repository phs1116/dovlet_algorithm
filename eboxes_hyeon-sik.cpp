#include <iostream>
#include <algorithm>
using namespace std;

int N, K, T, F;
// F = N -(x1+x2+...+xT) + k(x1+x2+...+xT) = N + (k-1)(x1+..+xT)
// 전체 상자의 갯수 B = N + x1*k + x2*k + x3*k +...+xT*K = N + K(x1+...xT)
// 즉 전체 상자의 갯수 B = N+K*(F-N)/(K-1)
int eboxes() {
	return N + K*(F - N) / (K - 1);
}



int main() {
	cin >> N >> K >> T >> F;

	cout << eboxes() << endl;
}