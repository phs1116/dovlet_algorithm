#include <iostream>
#include <cmath>
using namespace std;

long long n;

long long boi_squint() {
	//q^2 >= n�̹Ƿ� �ø�
	return ceil(sqrtl(n));
}

int main() {
	cin >> n;
	cout << boi_squint() << endl;
}