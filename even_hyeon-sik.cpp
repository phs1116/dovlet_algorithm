#include <iostream>
#include <cmath>
using namespace std;

//����� ������ Ȧ���� ���� 2^2,3^2�� ���� �������̴�.
int A, B;
int even() {

	//A�̸��� ������ ����, �ߺ� ���ŵ� A�̸��� �������� �����ش�.
	return B - (int)sqrt(double(B)) - (A-1) + (int)sqrt(double(A-1));
}

int main() {
	cin >> A >> B;

	cout << even() << endl;
}