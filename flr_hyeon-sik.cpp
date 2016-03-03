#include <iostream>
#include <cmath>

using namespace std;


int input;
//1. �������� Ǯ��
//���� �� ���� 2�� ���� �����Ѵ�. ���� �� �Ǿ��� ���� 2^(n-1)
//�� ���ϰ��� ���� ���� log2 + 1�� ���ϸ� ���� �������ִ�.
int flr(int num){
	int ret = log2(num)+1;
	return ret;
}
//2.����Ž������ ���ϱ�
//�� ���� �ڽĳ��� 2 * ���簪, 2*���簪+1�̴�.
int flr2(int num,int floor) {
	//������� : ��ġ�ϴ� ���� ã������ �� ��ȯ
	if (num == input) return floor;

	//�������2 : ���� ���ϰ��� �ϴ� ������ Ŭ�� 0 ��ȯ
	if (num > input) return 0;

	return flr2(2*num, floor + 1) + flr2(2*num + 1, floor+ 1);
}



int main() {
	cin >> input;
	
	// 1. �������� Ǯ ��
	cout << flr(input) << endl;

	// 2. ����Ž������ Ǯ ��
	cout << flr2(1, 1) << endl;
}