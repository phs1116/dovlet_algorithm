#include <iostream>
#include <algorithm>
using namespace std;


//유클리드 호제법
// a,b 두값의 최소공배수는 a1*x = b1*x + r(a1과 b2은 서로소)일 때
// b,r의 최소공배수와 같다.  만약 나머지가 0이 되면 작은값이 최소공배수이다. 
int gcd1(int n1, int n2) {
	int r;
	while (n2 != 0) {
		r = n1%n2;
		n1 = n2;
		n2 = r;
	}
	return n1;
}
//재귀로 풀기 
int gcd2(int n1, int n2) {
	return n2 != 0 ? gcd2(n2, n1%n2) : n1;
}
int n1, n2;
int main() {
	cin >> n1 >> n2;
	cout << gcd1(n1, n2) << ' ' << n1*n2 / gcd1(n1, n2);

}
