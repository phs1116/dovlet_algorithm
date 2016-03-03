#include <iostream>
#include <algorithm>
using namespace std;


//��Ŭ���� ȣ����
// a,b �ΰ��� �ּҰ������ a1*x = b1*x + r(a1�� b2�� ���μ�)�� ��
// b,r�� �ּҰ������ ����.  ���� �������� 0�� �Ǹ� �������� �ּҰ�����̴�. 
int gcd1(int n1, int n2) {
	int r;
	while (n2 != 0) {
		r = n1%n2;
		n1 = n2;
		n2 = r;
	}
	return n1;
}
//��ͷ� Ǯ�� 
int gcd2(int n1, int n2) {
	return n2 != 0 ? gcd2(n2, n1%n2) : n1;
}
int n1, n2;
int main() {
	cin >> n1 >> n2;
	cout << gcd1(n1, n2) << ' ' << n1*n2 / gcd1(n1, n2);

}
