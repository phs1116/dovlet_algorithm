#include <iostream>

using namespace std;

//1. �������� ���ϱ�
//���� �̵��� �Ÿ��� x*s��(s�� �ð�), l - (a+b)*s = 0�� �Ǵ� �ð��̴�.
//���� s = l/(a+b)�̹Ƿ� ���� �̵��ѰŸ��� x*(l/(a+b))�̴�.
int a, b, x, l;
double bumblebee() {
	return x*(l / (a + b));
}

//2. ���� Ž������ ���ϱ�
// ���� ���� �Ÿ��� 0�� �ɶ����� �ݺ��ؼ� ���Ѵ�.
double bumblebee2(double bee, double current) {
	if (current == 0) return bee;

	return bumblebee2(bee + x, current - (a + b));
}


int main() {
	cin >> a >> b >> x >> l;

	printf("%.6lf\n", bumblebee());
	printf("%.6lf\n", bumblebee2(0,l));
}