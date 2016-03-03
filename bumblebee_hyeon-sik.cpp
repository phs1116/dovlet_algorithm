#include <iostream>

using namespace std;

//1. 수학으로 구하기
//벌이 이동한 거리는 x*s는(s는 시간), l - (a+b)*s = 0이 되는 시간이다.
//따라서 s = l/(a+b)이므로 벌이 이동한거리는 x*(l/(a+b))이다.
int a, b, x, l;
double bumblebee() {
	return x*(l / (a + b));
}

//2. 완전 탐색으로 구하기
// 현재 남은 거리가 0이 될때까지 반복해서 구한다.
double bumblebee2(double bee, double current) {
	if (current == 0) return bee;

	return bumblebee2(bee + x, current - (a + b));
}


int main() {
	cin >> a >> b >> x >> l;

	printf("%.6lf\n", bumblebee());
	printf("%.6lf\n", bumblebee2(0,l));
}